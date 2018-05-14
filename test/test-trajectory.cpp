/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.h"
#include "motionCommandPluginWrapper.h"
#include "trajectoryPluginWrapper.h"
#include "waypointPluginWrapper.h"
#include "typeConversions.hpp"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>


void update()
{
    // Trajectory vector
    asn1_Vector3d tv;
    base::Vector3d tvAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(tv, tvAux);

    // Waypoint
    asn1_Waypoint wp;
    base::Vector3d wpAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(wp.position, wpAux);
    wp.heading = M_PI / 3.0;
    wp.tol_position = 0.0;
    wp.tol_heading = 0.0;

    // Motion command and pose
    asn1_Motion2D cmd;
    cmd.translation = 0.1;
    cmd.rotation = 0.0;
    
    asn1_Pose pose;
    base::Vector3d posAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(pose.position, posAux);
    base::AngleAxisd aa(M_PI/3.0, base::Vector3d::UnitZ());
    base::Quaterniond oriAux(aa);
    Quaterniond_toAsn1(pose.orientation, oriAux);

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Trajectory
        tv.data.arr[0] = i/100.0;
        tv.data.arr[1] = i/50.0;

        if (VIZTASTE_OK == result)
        {
            result = TrajectoryVisualization_updateTrajectory("Trajectory", &tv);
        }
        
        // Waypoint
        if (0 == i % 100)
        {
            wp.position.data.arr[0] = (i+100)/100.0;
            wp.position.data.arr[1] = (i+100)/50.0;

            if (VIZTASTE_OK == result)
            {
                result = WaypointVisualization_updateWaypoint("Waypoint", &wp);
            }
        }
        
        // Motion command
        if (0 == i % 100)
        {
            pose.position.data.arr[0] = i/100.0;
            pose.position.data.arr[1] = i/50.0;
            
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
