
/* Header file for function test_BodyState in CPP language
 * Generated by TASTE on 2021-07-14 18:50:24
 * Context Parameters present : NO
 * Provided interfaces : trigger
 * Required interfaces : updateBodyState, updateRigidBodyState
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 524 430 956 650
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

void test_bodystate_startup(void);

/* Provided interfaces */
void test_bodystate_PI_trigger( );

/* Required interfaces */
extern void test_bodystate_RI_updateBodyState( const asn1SccBase_samples_BodyState * );
extern void test_bodystate_RI_updateRigidBodyState( const asn1SccBase_samples_RigidBodyState * );


#ifdef __cplusplus
}
#endif

