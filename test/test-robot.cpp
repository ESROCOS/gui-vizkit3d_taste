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
 * main for test-bodystate, testing:
 * - BodyStateVisualization
 * - ModelVisualization
 *..................................................................
 * HISTORY
 * $History$
 *
 * ================================================================== */

#include "vizkit3d_c/vizkit3d_c.h"
#include "vizkit3d_c/robotPluginWrapper.h"
#include "asn1_types_support/asn1SccUtils.h"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>

void update()
{
    asn1SccVector3d xAxis = Vector3d_create(1.0, 0.0, 0.0);
    asn1SccRigidBodyState rbs;
    int dir3 = 1;
    
    // Joints: positions of joint_3, joint_4
    asn1SccJointState jz;
    jz.acceleration = 0;
    jz.effort = 0;
    jz.position = 0;
    jz.raw = 0;
    jz.speed = 0;
    
    asn1SccJoints joints;
    joints.names.nCount = 2;
    StringN_fromC(&joints.names.arr[0], "joint_3", jointsNameLength);
    StringN_fromC(&joints.names.arr[1], "joint_4", jointsNameLength);
    
    joints.elements.nCount = 2;
    joints.elements.arr[0] = jz;
    joints.elements.arr[1] = jz;

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;

        if (VIZTASTE_OK == result)
        {
            // Update RigidBodyState
            rbs.orient = Orientation_angleAxis( i * M_PI * 0.02 / 180.0, &xAxis);
            result = RobotVisualization_updateRigidBodyState("Robot", &rbs);
        }

        if (VIZTASTE_OK == result)
        {
            // Update Joints
            // joint_3
            double j3pos = joints.elements.arr[0].position;
            j3pos += dir3 * i * M_PI / 100000.0;
            if (abs(j3pos) > 2.3)
            {
                dir3 *= -1;
            }
            joints.elements.arr[0].position = j3pos;
            
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

    std::thread t1(update);
    t1.join();

    return 0;
}
