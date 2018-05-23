/* User code: This file will not be overwritten by TASTE. */

#include "test_robot.h"
#include "vizkit3d_taste/vizkit3d_taste.h"
#include "vizkit3d_taste/typeConversions.hpp"
#include <cmath>
#include <unistd.h>


// Globals
int i = 0;
asn1_RigidBodyState rbs;
asn1_Joints joints;
int dir3 = 1;
int j3 = 0;

void test_robot_startup()
{
    // Joints: positions of joint_3, joint_4
    asn1_JointState jz;
    jz.acceleration = 0;
    jz.effort = 0;
    jz.position = 0;
    jz.raw = 0;
    jz.speed = 0;
    
    joints.names.nCount = 2;

    strncpy((char*)&joints.names.arr[0].arr, "joint_3", numT_String);
    joints.names.arr[0].nCount = strnlen("joint_3", numT_String);
    strncpy((char*)&joints.names.arr[1].arr, "joint_4", numT_String);
    joints.names.arr[1].nCount = strnlen("joint_r", numT_String);
    
    joints.elements.nCount = 2;
    joints.elements.arr[0] = jz;
    joints.elements.arr[1] = jz;
}

void test_robot_PI_trigger()
{
    // Update RigidBodyState
    base::AngleAxisd aa( i*M_PI*0.01/180.0, base::Vector3d::UnitX());
    base::Quaterniond orientation(aa);
    Quaterniond_toAsn1(rbs.orientation, orientation);
    test_robot_RI_updateRigidBodyState(&rbs);

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

    test_robot_RI_updateJoints(&joints);

    i++;
}

