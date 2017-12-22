/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 * ---------------------------------------------------------------------
 * C interface wrapper for a RigidBodyStateVisualization plugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef RIGIDBODYSTATEPLUGINWRAPPER_H
#define RIGIDBODYSTATEPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1_types_support/asn1Types.h"

// Update function: returns VIZTASTE_XXX
int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //RIGIDBODYSTATEPLUGINWRAPPER_H
