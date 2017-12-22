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
 * - TrajectoryVisualization
 * - WaypointVisualization
 * - MotionCommandVisualization
 * - GridVisualization
 *..................................................................
 * HISTORY
 * $History$
 *
 * ================================================================== */

#include "vizkit3d_c/vizkit3d_c.h"
#include "vizkit3d_c/motionCommandPluginWrapper.h"
#include "vizkit3d_c/trajectoryPluginWrapper.h"
#include "vizkit3d_c/waypointPluginWrapper.h"
#include "asn1_types_support/asn1SccUtils.h"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>


void update()
{
    // Trajectory vector
    asn1SccVector3d tv = Vector3d_create(0.0, 0.0, 0.0);

    // Waypoint
    asn1SccWaypoint wp;
    wp.position = Vector3d_create(0.0, 0.0, 0.0);
    wp.heading = M_PI / 3.0;
    wp.tol_position = 0.0;
    wp.tol_heading = 0.0;

    // Motion command and pose
    asn1SccMotion2D cmd;
    cmd.translation = 0.1;
    cmd.rotation = 0.0;
    
    asn1SccVector3d zAxis = Vector3d_create(0.0, 0.0, 1.0);
    asn1SccPose pose;
    pose.pos = Vector3d_create(0.0, 0.0, 0.0);
    pose.orient =  Orientation_angleAxis(M_PI / 3.0, &zAxis);

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Trajectory
        tv.arr[0] = i/100.0;
        tv.arr[1] = i/50.0;

        if (VIZTASTE_OK == result)
        {
            result = TrajectoryVisualization_updateTrajectory("Trajectory", &tv);
        }
        
        // Waypoint
        if (0 == i % 100)
        {
            wp.position.arr[0] = (i+100)/100.0;
            wp.position.arr[1] = (i+100)/50.0;

            if (VIZTASTE_OK == result)
            {
                result = WaypointVisualization_updateWaypoint("Waypoint", &wp);
            }
        }
        
        // Motion command
        if (0 == i % 100)
        {
            pose.pos.arr[0] = i/100.0;
            pose.pos.arr[1] = i/50.0;
            
            if (VIZTASTE_OK == result)
            {
                result = MotionCommandVisualization_updateMotionCommand("Command", &cmd);
            }

            if (VIZTASTE_OK == result)
            {
                result = MotionCommandVisualization_updatePose("Command", &pose);
            }
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

        usleep(100000);
    }
}

int main(int argc, char** argv)
{
    int result = initializeVizkitOnce("config-trajectory.yml");
    if (VIZTASTE_OK != result)
    {
        std::cerr << "vizkit3d_c initialization error" << std::endl;
        return 1;
    }

    std::thread t1(update);
    t1.join();

    return 0;
}
