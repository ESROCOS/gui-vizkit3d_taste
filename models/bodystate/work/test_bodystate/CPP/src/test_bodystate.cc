/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* User code: This file will not be overwritten by TASTE. */

#include "test_bodystate.h"
#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "base_support/Base-samples-BodyStateConvert.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/OpaqueConversion.hpp"
#include <cmath>


// Globals
int i = 0;
asn1SccBase_samples_RigidBodyState rbs;
asn1SccBase_samples_BodyState bs;

void test_bodystate_startup()
{
    // Body state
    base::Vector3d translation(0.0, 0.0, 0.5);
    asn1Scc_Vector3d_toAsn1(bs.pose.translation, translation);
}

void test_bodystate_PI_trigger()
{
    // Rotation angle
    base::Quaterniond orientation(base::AngleAxisd(i*M_PI/180.0, base::Vector3d::UnitX()));

    // Body state
    asn1Scc_Quaterniond_toAsn1(bs.pose.orientation, orientation);
    test_bodystate_RI_updateBodyState(&bs);
    
    // Rigid body state
    asn1Scc_Quaterniond_toAsn1(rbs.orientation, orientation);
    test_bodystate_RI_updateRigidBodyState(&rbs);
    i++;
}

