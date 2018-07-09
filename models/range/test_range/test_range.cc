/* User code: This file will not be overwritten by TASTE. */

#include "test_range.h"
#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "base_support/OpaqueConversion.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-samples-DepthMapConvert.hpp"
#include "base_support/Base-samples-LaserScanConvert.hpp"
#include "base_support/Base-samples-PointcloudConvert.hpp"
#include "base_support/Base-samples-SonarBeamConvert.hpp"
#include <cmath>


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




// Globals
int i = 0;
base::samples::Pointcloud cloud;
base::samples::DepthMap map;
base::samples::LaserScan scan;
base::samples::RigidBodyState sonarPose;


const char* sonarDataFile = "sonar_beam.data";
#define maxSonarData 10000
std::vector<base::samples::SonarBeam> sonarData;

void test_range_startup()
{
    // Depth map
    map.vertical_projection = base::samples::DepthMap::PLANAR;
    map.horizontal_projection = base::samples::DepthMap::PLANAR;
    map.vertical_size = 6;
    map.horizontal_size = 6;
    for (int j = 0; j < 6; j++)
    {
        map.vertical_interval.push_back(j * 0.1);
        map.horizontal_interval.push_back(j * 0.1);
    }
    
    // Laser scan
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

    // Sonar pose
    sonarPose.position = base::Vector3d(0.0, 0.0, 0.0);
    sonarPose.orientation = base::Quaterniond(base::AngleAxisd(0.0, base::Vector3d::UnitZ()));
}

void test_range_PI_trigger()
{
    static int sonarCount = 0;
    asn1SccBase_samples_DepthMap asn1Map;
    asn1SccBase_samples_LaserScan asn1Scan;
    asn1SccBase_samples_Pointcloud asn1Cloud;
    asn1SccBase_samples_SonarBeam asn1Beam;
    asn1SccBase_samples_RigidBodyState asn1SonarPose;
    asn1SccBase_samples_RigidBodyState asn1Pose;
    
    // Point cloud
    cloud.points.clear();
    for (int j = 0; j < 6; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            cloud.points.push_back(base::Vector3d(i/1000.0, j/10.0, k/10.0));
        }
    }
    
    asn1SccBase_samples_Pointcloud_toAsn1(asn1Cloud, cloud);
    test_range_RI_updatePointCloud(&asn1Cloud);

    // Depth map
    map.distances.clear();
    for (int j = 0; j < 36 ; j++)
    {
        map.distances.push_back(i/1000.0);
    }
    asn1SccBase_samples_DepthMap_toAsn1(asn1Map, map);
    test_range_RI_updateDepthMap(&asn1Map);
    
    // Laser scan
    scan.ranges.clear();
    for (int j = 0; j < 30; j++)
    {
        scan.ranges.push_back(i+j);
    }

    asn1SccBase_samples_LaserScan_toAsn1(asn1Scan, scan);
    test_range_RI_updateLaserScan(&asn1Scan);
    
    // Sonar
    asn1SccBase_samples_RigidBodyState_toAsn1(asn1SonarPose, sonarPose);
    test_range_RI_updateOrientation(&asn1SonarPose);

    asn1SccBase_samples_SonarBeam_toAsn1(asn1Beam, sonarData[sonarCount++ % maxSonarData]);
    test_range_RI_updateSonarBeam(&asn1Beam);

    // Pose
    base::samples::RigidBodyState pose;
    pose.position = base::Vector3d(0.0, 0.0, 0.0);
    pose.orientation = base::Quaterniond(base::AngleAxisd(i*M_PI/180.0, base::Vector3d::UnitZ()));
    asn1SccBase_samples_RigidBodyState_toAsn1(asn1Pose, pose);
    
    test_range_RI_updatePose_LS(&asn1Pose);
    test_range_RI_updatePose_DM(&asn1Pose);    

    i++;
}

