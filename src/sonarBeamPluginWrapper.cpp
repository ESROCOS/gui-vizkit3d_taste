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
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "sonarBeamPluginWrapper.h"
#include "SonarBeamPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1RigidBodyStateConvert.hpp"
#include "asn1_types_support/asn1SonarBeamConvert.hpp"


int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1SccSonarBeam* beam)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", beam, SonarBeam_fromAsn1);
}

int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", state, RigidBodyState_fromAsn1);
}
