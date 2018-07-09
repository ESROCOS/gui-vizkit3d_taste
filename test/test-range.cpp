/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.hpp"
#include "pointcloudPluginWrapper.hpp"
#include "depthMapPluginWrapper.hpp"
#include "laserScanPluginWrapper.hpp"
#include "sonarBeamPluginWrapper.hpp"
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

int readSonarBeamEntry(const char* line, base::samples::SonarBeam& outSample)
{
    if ('#' == line[0])
    {
        // Comment
        return 1;
    }
    else
    {
        std::stringstream stm(line);
        stm >> outSample.time.microseconds 
            >> outSample.bearing.rad 
            >> outSample.sampling_interval 
            >> outSample.speed_of_sound 
            >> outSample.beamwidth_horizontal
            >> outSample.beamwidth_vertical;
               
        if (stm.fail())
        {
            // Error
            return -1;
        }

        // Read beam
        while (!stm.fail() && outSample.beam.size() <= 60)
        {
            double dist;
            stm >> dist;
            outSample.beam.push_back(dist);
        }
    }
    
    return 0;
}

size_t readSonarBeamFile(const char* file, std::vector<base::samples::SonarBeam>& outData)
{
    size_t readCount = 0;
    FILE* fd = NULL;
    char line[MAX_LINE];
    char* pLine = NULL;
    int readOk = 1;
    int parseResult = 0;
    base::samples::SonarBeam sample;
    
    fd = fopen(file, "r");
    
    if (NULL != fd)
    {
        while (readOk)
        {
            pLine = fgets(&line[0], MAX_LINE, fd);
            if (NULL != pLine)
            {
                base::samples::SonarBeam sample;
                parseResult = readSonarBeamEntry(line, sample);
                if (0 == parseResult)
                {
                    outData.push_back(sample);
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
std::vector<base::samples::SonarBeam> sonarData;

void update()
{
    // Point cloud
    base::samples::Pointcloud cloud;

    // Depth map
    base::samples::DepthMap map;
    map.vertical_projection = base::samples::DepthMap::PLANAR;
    map.horizontal_projection = base::samples::DepthMap::PLANAR;
    map.vertical_size = 6;
    map.horizontal_size = 6;
    for (int i = 0; i < 6; i++)
    {
        map.vertical_interval.push_back(i * 0.1);
        map.horizontal_interval.push_back(i * 0.1);
    }
    
    // Laser scan
    base::samples::LaserScan scan;
    scan.start_angle = -M_PI_4;
    scan.angular_resolution = M_PI / 60.0;
    scan.speed = 1.0;
    scan.minRange = 0.1;
    scan.maxRange = 1000.0;
    
    // Sonar beam
    size_t count = readSonarBeamFile(sonarDataFile, sonarData);
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
    base::samples::RigidBodyState pose;
    

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Point cloud
        if (VIZTASTE_OK == result)
        {
            cloud.points.clear();
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 6; k++)
                {
                    cloud.points.push_back(base::Vector3d(i/10000.0, j/10.0, k/10.0));
                }
            }
            
            result = PointcloudVisualization_updatePointCloud("Cloud", cloud);
        }

        // Depth map
        if (VIZTASTE_OK == result)
        {
            map.distances.clear();
            for (int j = 0; j < 36 ; j++)
            {
                map.distances.push_back(i/10000.0);
            }
                
            result = DepthMapVisualization_updateDepthMap("Map", map);
        }
        
        if (VIZTASTE_OK == result)
        {
            scan.ranges.clear();
            for (int j = 0; j < 30; j++)
            {
                scan.ranges.push_back((i+j)/10.0);
            }
            
            result = LaserScanVisualization_updateLaserScan("Laser", scan);
        }
        
        // Sonar
        if (VIZTASTE_OK == result)
        {
            result = SonarBeamVisualization_updateSonarBeam("Sonar", sonarData[i % sonarData.size()]);
        }   

        // Pose
        pose.position = base::Vector3d(0.0, 0.0, 0.0);
        pose.orientation = base::Quaterniond(base::AngleAxisd(i*M_PI/180.0, base::Vector3d::UnitZ()));

        if (VIZTASTE_OK == result)
        {
            result = DepthMapVisualization_updatePose("Map", pose);
        }

        if (VIZTASTE_OK == result)
        {
            result = LaserScanVisualization_updatePose("Laser", pose);
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
    usleep(100);

    return 0;
}
