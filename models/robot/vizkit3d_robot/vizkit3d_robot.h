/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_vizkit3d_robot__
#define __USER_CODE_H_vizkit3d_robot__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void vizkit3d_robot_startup();

void vizkit3d_robot_PI_updateRigidBodyState(const asn1SccBase_samples_RigidBodyState *);

void vizkit3d_robot_PI_updateJoints(const asn1SccBase_commands_Joints *);

#ifdef __cplusplus
}
#endif


#endif
