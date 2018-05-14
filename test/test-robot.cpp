/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.h"
#include "robotPluginWrapper.h"
#include "typeConversions.hpp"
#include <thread>
#include <cmath>
#include <cstring>
#include <iostream>
#include <unistd.h>

void update()
{
    asn1_RigidBodyState rbs;
    int dir3 = 1;
    
    // Joints: positions of joint_3, joint_4
    asn1_JointState jz;
    jz.acceleration = 0;
    jz.effort = 0;
    jz.position = 0;
    jz.raw = 0;
    jz.speed = 0;
    
    asn1_Joints joints;
    joints.names.nCount = 2;

    strncpy((char*)&joints.names.arr[0].arr, "joint_3", numT_String);
    joints.names.arr[0].nCount = strnlen("joint_3", numT_String);
    strncpy((char*)&joints.names.arr[1].arr, "joint_4", numT_String);
    joints.names.arr[1].nCount = strnlen("joint_r", numT_String);
    
    joints.elements.nCount = 2;
    joints.elements.arr[0] = jz;
    joints.elements.arr[1] = jz;

    int j3 = 0;

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;

        if (VIZTASTE_OK == result)
        {
            // Update RigidBodyState
            
            base::AngleAxisd aa( i*M_PI*0.01/180.0, base::Vector3d::UnitX());
            base::Quaterniond orientation(aa);
            Quaterniond_toAsn1(rbs.orientation, orientation);

            result = RobotVisualization_updateRigidBodyState("Robot", &rbs);
        }

        if (VIZTASTE_OK == result)
        {
            // Update Joints
            // joint_3
            double j3pos = joints.elements.arr[0].position;
            j3pos += dir3 * abs(j3) * M_PI / 100000.0;
            if (abs(j3pos) > 2.0)
            {
                dir3 *= -1;
            }
            joints.elements.arr[0].position = j3pos;
            j3 += dir3;
            
            // joint_4
            double j4pos = joints.elements.arr[1].position;
            j4pos = i * M_PI / 500.0;
            j4pos = remainder(j4pos, M_PI);
            joints.elements.arr[1].position = j4pos;

            result = RobotVisualization_updateJoints("Robot", &joints);
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
