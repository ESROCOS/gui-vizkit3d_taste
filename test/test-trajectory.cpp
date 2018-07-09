/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.hpp"
#include "motionCommandPluginWrapper.hpp"
#include "trajectoryPluginWrapper.hpp"
#include "waypointPluginWrapper.hpp"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>


void update()
{
    // Trajectory vector
    base::Vector3d tv(0.0, 0.0, 0.0);

    // Waypoint
    base::Waypoint wp(base::Vector3d(0.0, 0.0, 0.0), M_PI / 3.0, 0.0, 0.0);

    // Motion command and pose
    base::commands::Motion2D cmd(0.1, 0.0);
    base::Pose pose(base::Vector3d(0.0, 0.0, 0.0), base::Quaterniond(base::AngleAxisd(M_PI/3.0, base::Vector3d::UnitZ())));

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Trajectory
        tv[0] = i/100.0;
        tv[1] = i/50.0;

        if (VIZTASTE_OK == result)
        {
            result = TrajectoryVisualization_updateTrajectory("Trajectory", tv);
        }
        
        // Waypoint
        if (0 == i % 100)
        {
            wp.position[0] = (i+100)/100.0;
            wp.position[1] = (i+100)/50.0;

            if (VIZTASTE_OK == result)
            {
                result = WaypointVisualization_updateWaypoint("Waypoint", wp);
            }
        }
        
        // Motion command
        if (0 == i % 100)
        {
            pose.position[0] = i/100.0;
            pose.position[1] = i/50.0;
            
            if (VIZTASTE_OK == result)
            {
                result = MotionCommandVisualization_updateMotionCommand("Command", cmd);
            }

            if (VIZTASTE_OK == result)
            {
                result = MotionCommandVisualization_updatePose("Command", pose);
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
    usleep(100);

    return 0;
}
