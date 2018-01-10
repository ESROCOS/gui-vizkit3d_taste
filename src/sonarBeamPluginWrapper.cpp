/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "sonarBeamPluginWrapper.h"
#include "SonarBeamPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1RigidBodyStateConvert.hpp"
#include "sensor_samples_support/asn1SonarBeamConvert.hpp"


int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1SccSonarBeam* beam)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", beam, SonarBeam_fromAsn1);
}

int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", state, RigidBodyState_fromAsn1);
}
