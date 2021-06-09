/* Header file for function test_Trajectory in CPP language
 * Generated by TASTE on 2021-06-09 12:19:50
 * Context Parameters present : NO
 * Provided interfaces : trigger
 * Required interfaces : updateMotionCommand, updatePose, updateTrajectory, updateWaypoint
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 185 149 503 368
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

/* The purpose of this file is to provide a wrapper around the user code,
 * with a single interface that is independent of the implementation language
 * of the function. The parameters of each PI are blackboxes encoded
 * in the form specified in the interface view (Native, uPER, or ACN)
*/

#pragma once
#if defined(__unix__) || defined (__MSP430__)
   #include <stdlib.h>
   #include <stdio.h>
#else
   typedef unsigned size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "test_trajectory.h"

// Function initialization - calls user startup code of all dependent functions
void init_test_trajectory(void);


/* Provided interfaces */
void test_trajectory_trigger(void);


#ifdef __cplusplus
}
#endif

