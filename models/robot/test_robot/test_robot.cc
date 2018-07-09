/* User code: This file will not be overwritten by TASTE. */

#include "test_robot.h"
#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-commands-JointsConvert.hpp"
#include <cmath>
#include <unistd.h>


// Globals
int i = 0;
base::samples::RigidBodyState rbs;
base::samples::Joints joints;
int dir3 = 1;
int j3 = 0;

void test_robot_startup()
{
    rbs.position = base::Vector3d(0.0, 0.0, 0.0);
    
    // Joints: positions of joint_3, joint_4
    base::JointState jz;
    jz.acceleration = 0;
    jz.effort = 0;
    jz.position = 0;
    jz.raw = 0;
    jz.speed = 0;
    
    joints.names.push_back("joint_3");
    joints.names.push_back("joint_4");
    
    joints.elements.push_back(jz);
    joints.elements.push_back(jz);
}

void test_robot_PI_trigger()
{
    asn1SccBase_samples_RigidBodyState asn1Rbs;
    asn1SccBase_commands_Joints asn1Joints;
    
    // Update RigidBodyState
    rbs.orientation = base::Quaterniond(base::AngleAxisd(i*M_PI*0.01/180.0, base::Vector3d::UnitX()));
    asn1SccBase_samples_RigidBodyState_toAsn1(asn1Rbs, rbs);
    test_robot_RI_updateRigidBodyState(&asn1Rbs);

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

    asn1SccBase_commands_Joints_toAsn1(asn1Joints, joints);
    test_robot_RI_updateJoints(&asn1Joints);

    i++;
}

