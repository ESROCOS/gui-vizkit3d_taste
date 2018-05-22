/* User code: This file will not be overwritten by TASTE. */

#include "test_bodystate.h"
#include "vizkit3d_taste/vizkit3d_taste.h"
#include "vizkit3d_taste/typeConversions.hpp"
#include <cmath>


// Globals
int i = 0;
asn1_RigidBodyState rbs;
asn1_BodyState bs;

void test_bodystate_startup()
{
    // Body state
    base::Vector3d translation(0.0, 0.0, 0.5);
    Vector3d_toAsn1(bs.pose.translation, translation);
}

void test_bodystate_PI_trigger()
{
    // Rotation angle
    base::AngleAxisd aa(i*M_PI/180.0, base::Vector3d::UnitX());
    base::Quaterniond orientation(aa);

    // Body state
    Quaterniond_toAsn1(bs.pose.orientation, orientation);
    test_bodystate_RI_updateBodyState(&bs);
    
    // Rigid body state
    Quaterniond_toAsn1(rbs.orientation, orientation);
    test_bodystate_RI_updateRigidBodyState(&rbs);
    i++;
}

