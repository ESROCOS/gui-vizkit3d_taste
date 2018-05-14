/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

// This file provides adaptor functions for the ASN.1 type conversion 
// functions in the types/base_support package.

#include "typeDefinitions.h"
#include "base_support/Base-commands-Motion2DConvert.hpp"
#include "base_support/Base-PoseConvert.hpp"
#include "base_support/Base-samples-BodyStateConvert.hpp"
#include "base_support/Base-samples-DepthMapConvert.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-WaypointConvert.hpp"
#include "base_support/OpaqueConversion.hpp"
#include "base_support/Wrappers-Vector3dConvert.hpp"
#include "base_support/Wrappers-QuaterniondConvert.hpp"

// TO-DO: check missing includes in generated types
#include <base/commands/Joints.hpp>
#include "base_support/Base-commands-JointsConvert.hpp"
#include <base/samples/LaserScan.hpp>
#include "base_support/Base-samples-LaserScanConvert.hpp"
#include <base/samples/Pointcloud.hpp>
#include "base_support/Base-samples-PointcloudConvert.hpp"
#include <base/samples/SonarBeam.hpp>
#include "base_support/Base-samples-SonarBeamConvert.hpp"


inline void BodyState_fromAsn1(base::samples::BodyState& result, const asn1_BodyState& asnVal)
{
    asn1SccBase_samples_BodyState_fromAsn1(result, asnVal);
}

inline void Motion2D_fromAsn1(base::commands::Motion2D& result, const asn1_Motion2D& asnVal)
{
    asn1SccBase_commands_Motion2D_fromAsn1(result, asnVal);
}

inline void Quaterniond_toAsn1(asn1_Quaterniond& result, const base::Quaterniond& baseObj)
{
    wrappers::Quaterniond intermediate;
    Base_Quaterniond_toIntermediate(intermediate, baseObj);
    asn1SccWrappers_Quaterniond_toAsn1(result, intermediate);
}

inline void Pose_fromAsn1(base::Pose& result, const asn1_Pose& asnVal)
{
    asn1SccBase_Pose_fromAsn1(result, asnVal);
}

inline void RigidBodyState_fromAsn1(base::samples::RigidBodyState& result, const asn1_RigidBodyState& asnVal)
{
    asn1SccBase_samples_RigidBodyState_fromAsn1(result, asnVal);
}

inline void Vector3d_fromAsn1(base::Vector3d& result, const asn1_Vector3d& asnVal)
{
    wrappers::Vector3d intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(intermediate, asnVal);
    Base_Vector3d_fromIntermediate(result, intermediate);
}

inline void Vector3d_toAsn1(asn1_Vector3d& result, const base::Vector3d& baseObj)
{
    wrappers::Vector3d intermediate;
    Base_Vector3d_toIntermediate(intermediate, baseObj);
    asn1SccWrappers_Vector3d_toAsn1(result, intermediate);
}

inline void Waypoint_fromAsn1(base::Waypoint& result, const asn1_Waypoint& asnVal)
{
    asn1SccBase_Waypoint_fromAsn1(result, asnVal);
}


// The wrapperTemplate expects conversion functions with 2 arguments.
// For types with configurable sizes, the conversion function is a
// template that needs to be instantiated, and the adaptor functions 
// fix the field sizes to the defaults.

inline void DepthMap_fromAsn1(base::samples::DepthMap& result, const asn1_DepthMap & asnVal)
{
    asn1SccBase_samples_DepthMap_fromAsn1<asn1_DepthMap>(result, asnVal);
}

inline void Joints_fromAsn1(base::commands::Joints& result, const asn1_Joints & asnVal)
{
    asn1SccBase_commands_Joints_fromAsn1<asn1_Joints>(result, asnVal);
}

inline void LaserScan_fromAsn1(base::samples::LaserScan& result, const asn1_LaserScan & asnVal)
{
    asn1SccBase_samples_LaserScan_fromAsn1<asn1_LaserScan>(result, asnVal);
}

inline void Pointcloud_fromAsn1(base::samples::Pointcloud& result, const asn1_Pointcloud & asnVal)
{
    asn1SccBase_samples_Pointcloud_fromAsn1<asn1_Pointcloud>(result, asnVal);
}

inline void SonarBeam_fromAsn1(base::samples::SonarBeam& result, const asn1_SonarBeam & asnVal)
{
    asn1SccBase_samples_SonarBeam_fromAsn1<asn1_SonarBeam>(result, asnVal);
}

