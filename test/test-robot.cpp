/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.hpp"
#include "robotPluginWrapper.hpp"
#include <thread>
#include <cmath>
#include <cstring>
#include <iostream>
#include <unistd.h>

void update()
{
    base::samples::RigidBodyState rbs;
    rbs.position = base::Vector3d(0.0, 0.0, 0.0);
    int dir3 = 1;
    
    // Joints: positions of joint_3, joint_4
    base::JointState jz;
    jz.acceleration = 0;
    jz.effort = 0;
    jz.position = 0;
    jz.raw = 0;
    jz.speed = 0;
    
    base::samples::Joints joints;
    joints.names.push_back("joint_3");
    joints.names.push_back("joint_4");
    
    joints.elements.push_back(jz);
    joints.elements.push_back(jz);

    int j3 = 0;

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;

        if (VIZTASTE_OK == result)
        {
            // Update RigidBodyState
            rbs.orientation = base::Quaterniond(base::AngleAxisd(i*M_PI*0.01/180.0, base::Vector3d::UnitX()));
            result = RobotVisualization_updateRigidBodyState("Robot", rbs);
        }

        if (VIZTASTE_OK == result)
        {
            // Update Joints
            // joint_3
            double j3pos = joints.elements[0].position;
            j3pos += dir3 * abs(j3) * M_PI / 100000.0;
            if (abs(j3pos) > 2.0)
            {
                dir3 *= -1;
            }
            joints.elements[0].position = j3pos;
            j3 += dir3;
            
            // joint_4
            double j4pos = joints.elements[1].position;
            j4pos = i * M_PI / 500.0;
            j4pos = remainder(j4pos, M_PI);
            joints.elements[1].position = j4pos;

            result = RobotVisualization_updateJoints("Robot", joints);
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
    int result = initializeVizkitOnce("config-robot.yml");
    if (VIZTASTE_OK != result)
    {
        std::cerr << "vizkit3d_c initialization error" << std::endl;
        return 1;
    }

    usleep(1000000);
    std::thread t1(update);
    t1.join();

    return 0;
}
