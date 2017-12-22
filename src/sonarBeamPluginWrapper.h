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
 * C interface wrapper for a SonarBeamVisualization plugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef SONARBEAMPLUGINWRAPPER_H
#define SONARBEAMPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1_types_support/asn1Types.h"

// Update function: returns VIZTASTE_XXX
int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1SccSonarBeam* beam);
int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //SONARBEAMPLUGINWRAPPER_H
