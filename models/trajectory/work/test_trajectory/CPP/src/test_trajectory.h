
/* Header file for function test_Trajectory in CPP language
 * Generated by TASTE on 2021-07-15 12:12:14
 * Context Parameters present : NO
 * Provided interfaces : trigger
 * Required interfaces : updateMotionCommand, updatePose, updateTrajectory, updateWaypoint
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 185 149 503 368
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

void test_trajectory_startup(void);

/* Provided interfaces */
void test_trajectory_PI_trigger( );

/* Required interfaces */
extern void test_trajectory_RI_updateMotionCommand( const asn1SccBase_commands_Motion2D * );
extern void test_trajectory_RI_updatePose( const asn1SccBase_Pose * );
extern void test_trajectory_RI_updateTrajectory( const asn1SccWrappers_Vector3d * );
extern void test_trajectory_RI_updateWaypoint( const asn1SccBase_Waypoint * );


#ifdef __cplusplus
}
#endif

