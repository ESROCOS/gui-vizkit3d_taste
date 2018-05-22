/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_test_range__
#define __USER_CODE_H_test_range__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void test_range_startup();

void test_range_PI_trigger();

extern void test_range_RI_updatePointCloud(const asn1SccBase_samples_Pointcloud *);

extern void test_range_RI_updateDepthMap(const asn1SccBase_samples_DepthMap *);

extern void test_range_RI_updatePose_DM(const asn1SccBase_samples_RigidBodyState *);

extern void test_range_RI_updateLaserScan(const asn1SccBase_samples_LaserScan *);

extern void test_range_RI_updatePose_LS(const asn1SccBase_samples_RigidBodyState *);

extern void test_range_RI_updateSonarBeam(const asn1SccBase_samples_SonarBeam *);

extern void test_range_RI_updateOrientation(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
