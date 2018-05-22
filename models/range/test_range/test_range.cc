/* User code: This file will not be overwritten by TASTE. */

#include "test_range.h"
#include "vizkit3d_taste/vizkit3d_taste.h"
#include "vizkit3d_taste/typeConversions.hpp"
#include <cmath>


// SonarBeam help functions

#define MAX_LINE 1000

int readSonarBeamEntry(const char* line, asn1_SonarBeam* pOutSample)
{
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



// Globals
int i = 0;
asn1_Pointcloud cloud;
asn1_DepthMap map;
asn1_LaserScan scan;
asn1_RigidBodyState pose;
asn1_RigidBodyState sonarPose;


const char* sonarDataFile = "sonar_beam.data";
#define maxSonarData 10000
asn1_SonarBeam* sonarData[maxSonarData];

void test_range_startup()
{
    int j;

    // Point cloud
    cloud.points.nCount = 36;
    cloud.colors.nCount = 0;

    // Depth map
    map.vertical_projection = asn1Sccplanar;
    map.horizontal_projection = asn1Sccplanar;
    map.vertical_size = 6;
    map.horizontal_size = 6;
    map.vertical_interval.nCount = 6;
    map.horizontal_interval.nCount = 6;
    for (j = 0; j < 6; j++)
    {
        map.vertical_interval.arr[j] = j * 0.1;
        map.horizontal_interval.arr[j] = j * 0.1;
    }
    
    // Laser scan
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
}

void test_range_PI_trigger()
{
    static int sonarCount = 0;
    
    // Point cloud
    for (int j = 0; j < 6; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            base::Vector3d point(i/1000.0, j/10.0, k/10.0);
            Vector3d_toAsn1(cloud.points.arr[6*j+k], point);
        }
    }
    test_range_RI_updatePointCloud(&cloud);

    // Depth map
    map.distances.nCount = 36;
    for (int j = 0; j < map.distances.nCount ; j++)
    {
        map.distances.arr[j] = i/1000.0;
    }
    test_range_RI_updateDepthMap(&map);
    
    // Laser scan
    scan.ranges.nCount = 30;
    for (int j = 0; j < scan.ranges.nCount; j++)
    {
        scan.ranges.arr[j] = (i+j);
    }
    test_range_RI_updateLaserScan(&scan);
    
    // Sonar
    if (NULL != sonarData[sonarCount % maxSonarData])
    {
        test_range_RI_updateOrientation(&sonarPose);
        test_range_RI_updateSonarBeam(sonarData[sonarCount++ % maxSonarData]);
    }

    // Pose
    base::AngleAxisd rotation(i*M_PI/180.0, base::Vector3d::UnitZ());
    base::Quaterniond orientation(rotation);
    Quaterniond_toAsn1(pose.orientation, orientation);
    
    test_range_RI_updatePose_LS(&pose);
    test_range_RI_updatePose_DM(&pose);    

    i++;
}

