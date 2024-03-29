
/* Header file for function vizkit3d_Trajectory in CPP language
 * Generated by TASTE on 2021-07-15 12:12:14
 * Context Parameters present : YES
 * Provided interfaces : updateTrajectory
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 882 128 1175 277
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

void vizkit3d_trajectory_startup(void);

/* Provided interfaces */
void vizkit3d_trajectory_PI_updateTrajectory( const asn1SccWrappers_Vector3d * );

/* Required interfaces */



#ifdef __cplusplus
}
#endif

