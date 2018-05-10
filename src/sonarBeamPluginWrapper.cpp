/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "sonarBeamPluginWrapper.h"
#include "SonarBeamPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1_SonarBeam* beam)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", beam, SonarBeam_fromAsn1);
}

int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1_RigidBodyState* state)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", state, RigidBodyState_fromAsn1);
}
