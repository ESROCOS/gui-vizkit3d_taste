/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_vizkit3d_laserscan__
#define __USER_CODE_H_vizkit3d_laserscan__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void vizkit3d_laserscan_startup();

void vizkit3d_laserscan_PI_updateLaserScan(const asn1SccBase_samples_LaserScan *);

void vizkit3d_laserscan_PI_updatePose(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
