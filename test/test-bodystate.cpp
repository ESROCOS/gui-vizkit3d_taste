/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.hpp"
#include "bodyStatePluginWrapper.hpp"
#include "rigidBodyStatePluginWrapper.hpp"
#include "base/Eigen.hpp"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>

void update()
{
    // Body state
    base::samples::BodyState bs;
    bs.pose.translation = base::Vector3d(0.0, 0.0, 0.5);
    
    // Rigid body state
    base::samples::RigidBodyState rbs;

    for (int i = 0; ; ++i)
    {
        // Rotation angle
        base::Quaterniond orientation(base::AngleAxisd(i*M_PI/180.0, base::Vector3d::UnitX()));

        int result = VIZTASTE_OK;
        
        // Body state
        if (VIZTASTE_OK == result)
        {    
            bs.pose.orientation = orientation;
            result = BodyStateVisualization_updateBodyState("BS", bs);
        }
        
        // Rigid body state
        if (VIZTASTE_OK == result)
        {    
            rbs.orientation = orientation;
            result = RigidBodyStateVisualization_updateRigidBodyState("RBS", rbs);
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
    int result = initializeVizkitOnce("config-bodystate.yml");
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
