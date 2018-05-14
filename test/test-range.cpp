/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.h"
#include "pointcloudPluginWrapper.h"
#include "depthMapPluginWrapper.h"
#include "laserScanPluginWrapper.h"
#include "sonarBeamPluginWrapper.h"
#include "typeConversions.hpp"
#include "base/Eigen.hpp"
#include <thread>
#include <cmath>
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <cstddef>
#include <cassert>
#include <cstdio>
#include <cstdlib>


// SonarBeam help functions

#define MAX_LINE 1000

int readSonarBeamEntry(const char* line, asn1_SonarBeam* pOutSample)
{
    int parsed = 0;
    int count = 0;
    int incr = 0;
    
    assert(NULL != pOutSample && "NULL output pointer in readSonarBeamEntry");
    
    if ('#' == line[0])
    {
        // Comment
        return 1;
    }
    else
    {
        std::stringstream stm(line);
        stm >> pOutSample->time.microseconds 
            >> pOutSample->bearing.rad 
            >> pOutSample->sampling_interval 
            >> pOutSample->speed_of_sound 
            >> pOutSample->beamwidth_horizontal
            >> pOutSample->beamwidth_vertical;
               
        if (stm.fail())
        {
            // Error
            return -1;
        }

        // Read beam
        pOutSample->beam.nCount = 0;
        while (!stm.fail() && pOutSample->beam.nCount <= 60)
        {
            stm >> pOutSample->beam.arr[pOutSample->beam.nCount];
            pOutSample->beam.nCount++;
        }
    }
    
    return 0;
}

size_t readSonarBeamFile(const char* file, asn1_SonarBeam** pOutSamples, size_t maxSamples)
{
    size_t readCount = 0;
    FILE* fd = NULL;
    char line[MAX_LINE];
    char* pLine = NULL;
    int readOk = 1;
    int parseResult = 0;
    asn1_SonarBeam sample;
    
    assert(NULL != pOutSamples && "NULL output array in readSonarBeamFile");
    
    fd = fopen(file, "r");
    
    if (NULL != fd)
    {
        while (readOk && readCount < maxSamples)
        {
            pLine = fgets(&line[0], MAX_LINE, fd);
            if (NULL != pLine)
            {
                parseResult = readSonarBeamEntry(line, &sample);
                if (0 == parseResult)
                {
                    pOutSamples[readCount] = (asn1_SonarBeam*)malloc(sizeof(asn1_SonarBeam));
                    *pOutSamples[readCount] = sample;
                    readCount++;
                }
                else if (1 == parseResult)
                {
                    // comment line: ignore
                }
                else
                {
                    readOk = 0;
                }
            }
            else
            {
                readOk = 0;
            }
        }
        
        fclose(fd);
    }
    
    return readCount;
}




// Test

const char* sonarDataFile = "sonar_beam.data";
const size_t maxSonarData = 10000;
asn1_SonarBeam* sonarData[maxSonarData];

void update()
{
    for (size_t i = 0; i < maxSonarData; i++)
    {
        sonarData[i] = NULL;
    }
    
    // Point cloud
    asn1_Pointcloud cloud;
    cloud.points.nCount = 36;
    cloud.colors.nCount = 0;

    // Depth map
    asn1_DepthMap map;
    map.vertical_projection = asn1Sccplanar;
    map.horizontal_projection = asn1Sccplanar;
    map.vertical_size = 6;
    map.horizontal_size = 6;
    map.vertical_interval.nCount = 6;
    map.horizontal_interval.nCount = 6;
    for (int i = 0; i < 6; i++)
    {
        map.vertical_interval.arr[i] = i * 0.1;
        map.horizontal_interval.arr[i] = i * 0.1;
    }
    
    // Laser scan
    asn1_LaserScan scan;
    scan.start_angle = -M_PI_4;
    scan.angular_resolution = M_PI / 60.0;
    scan.speed = 1.0;
    scan.minrange = 0.1;
    scan.maxrange = 1000.0;
    
    // Sonar beam
    size_t count = readSonarBeamFile(sonarDataFile, sonarData, maxSonarData);
    if (count > 0)
    {
        std::cout << "Read sonar data: " << count << " entries." << std::endl;
        std::cout << "Enable KeepOldData manually." << std::endl;
    }
    else
    {
        std::cout << "Cannot read sonar data." << std::endl;
    }

    // Pose of depth map an laser scan (same pose, different frame)
    asn1_RigidBodyState pose;

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Point cloud
        if (VIZTASTE_OK == result)
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 6; k++)
                {
                    base::Vector3d point(i/10000.0, j/10.0, k/10.0);
                    Vector3d_toAsn1(cloud.points.arr[6*j+k], point);
                }
            }
            
            result = PointcloudVisualization_updatePointCloud("Cloud", &cloud);
        }

        // Depth map
        if (VIZTASTE_OK == result)
        {
            map.distances.nCount = 36;
            for (int j = 0; j < map.distances.nCount ; j++)
            {
                map.distances.arr[j] = i/10000.0;
            }
                
            result = DepthMapVisualization_updateDepthMap("Map", &map);
        }
        
        if (VIZTASTE_OK == result)
        {
            scan.ranges.nCount = 30;
            for (int j = 0; j < scan.ranges.nCount; j++)
            {
                scan.ranges.arr[j] = (i+j)/10.0;
            }
            
            result = LaserScanVisualization_updateLaserScan("Laser", &scan);
        }
        
        // Sonar
        if (VIZTASTE_OK == result)
        {
            if (NULL != sonarData[i%maxSonarData])
            {
                result = SonarBeamVisualization_updateSonarBeam("Sonar", sonarData[i%maxSonarData]);
            }
        }   

        // Pose
        base::AngleAxisd rotation(i*M_PI/180.0, base::Vector3d::UnitZ());
        base::Quaterniond orientation(rotation);
        Quaterniond_toAsn1(pose.orientation, orientation);

        if (VIZTASTE_OK == result)
        {
            result = DepthMapVisualization_updatePose("Map", &pose);
        }

        if (VIZTASTE_OK == result)
        {
            result = LaserScanVisualization_updatePose("Laser", &pose);
        }

        switch (result)
        {
            case VIZTASTE_TERMINATED:
                return;
            case VIZTASTE_INIT_FAILED:
                std::cerr << "VIZTASTE_INIT_FAILED" << std::endl;
                return;
            case VIZTASTE_PLUGIN_NOT_FOUND:
                std::cerr << "VIZTASTE_PLUGIN_NOT_FOUND" << std::endl;
                break;
            case VIZTASTE_PLUGIN_WRONG_TYPE:
                std::cerr << "VIZTASTE_PLUGIN_WRONG_TYPE" << std::endl;
                break;
            case VIZTASTE_PLUGIN_EXCEPTION:
                std::cerr << "VIZTASTE_PLUGIN_EXCEPTION" << std::endl;
                break;
        }

        usleep(5000);
    }
}

int main(int argc, char** argv)
{
    int result = initializeVizkitOnce("config-range.yml");
    if (VIZTASTE_OK != result)
    {
        std::cerr << "vizkit3d_c initialization error" << std::endl;
        return 1;
    }
    
    std::cout << "Enable TextureBoxVisualization from the GUI." << std::endl;

    std::thread t1(update);
    t1.join();

    return 0;
}
