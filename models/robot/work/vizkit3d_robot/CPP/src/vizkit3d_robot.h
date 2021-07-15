
/* Header file for function vizkit3d_Robot in CPP language
 * Generated by TASTE on 2021-07-15 12:10:53
 * Context Parameters present : YES
 * Provided interfaces : updateJoints, updateRigidBodyState
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 1432 432 1783 647
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

#pragma once

#include "dataview-uniq.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __unix__
   #include <stdlib.h>
   #include <stdio.h>
#endif

void vizkit3d_robot_startup(void);

/* Provided interfaces */
void vizkit3d_robot_PI_updateJoints( const asn1SccBase_commands_Joints * );
void vizkit3d_robot_PI_updateRigidBodyState( const asn1SccBase_samples_RigidBodyState * );

/* Required interfaces */



#ifdef __cplusplus
}
#endif

