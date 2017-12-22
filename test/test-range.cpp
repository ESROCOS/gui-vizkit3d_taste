/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 *
 *..................................................................
 * main for test-rigidbodystate, testing:
 * - PointcloudVisualization
 * - DepthMapVisualization
 * - LaserScanVisualization
 * - GridVisualization
 *..................................................................
 * HISTORY
 * $History$
 *
 * ================================================================== */

#include "vizkit3d_c/vizkit3d_c.h"
#include "vizkit3d_c/pointcloudPluginWrapper.h"
#include "vizkit3d_c/depthMapPluginWrapper.h"
#include "vizkit3d_c/laserScanPluginWrapper.h"
#include "vizkit3d_c/sonarBeamPluginWrapper.h"
#include "asn1_types_support/asn1SccUtils.h"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>
#include <stddef.h>

const char* sonarDataFile = "sonar_beam.data";
const size_t maxSonarData = 10000;
asn1SccSonarBeam* sonarData[maxSonarData];

void update()
{
    for (size_t i = 0; i < maxSonarData; i++)
    {
        sonarData[i] = NULL;
    }
    
    // Point cloud
    asn1SccPointcloud cloud;
    cloud.points.nCount = 36;
    cloud.colors.nCount = 0;

    // Depth map
    asn1SccDepthMap map;
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
    asn1SccLaserScan scan;
    scan.start_angle = -M_PI_4;
    scan.angular_resolution = M_PI / 60.0;
    scan.speed = 1.0;
    scan.minRange = 0.1;
    scan.maxRange = 1000.0;
    
    // Sonar beam
    size_t count = readSonarBeamFile(sonarDataFile, sonarData, maxSonarData);
    if (count > 0)
    {
        printf("Read sonar data: %d entries.\n", count);
        printf("Enable KeepOldData manually.\n");
    }
    else
    {
        printf("Cannot read sonar data.\n");
    }

    // Pose of depth map an laser scan (same pose, different frame)
    asn1SccRigidBodyState pose;
    asn1SccVector3d zAxis = Vector3d_create(0.0, 0.0, 1.0);

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
                    cloud.points.arr[6*j+k] = Vector3d_create(i/10000.0, j/10.0, k/10.0);
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
        pose.orient = Orientation_angleAxis(i*M_PI/180.0, &zAxis);

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
