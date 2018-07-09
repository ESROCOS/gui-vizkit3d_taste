/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "sonarBeamPluginWrapper.hpp"
#include "SonarBeamPluginController.hpp"
#include "wrapperTemplate.hpp"


int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const base::samples::SonarBeam& beam)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", beam);
}

int SonarBeamVisualization_updateOrientation(const char* pluginName, const base::samples::RigidBodyState& state)
{
    return updatePluginData<SonarBeamPluginController>(pluginName, "SonarBeamVisualization", state);
}
