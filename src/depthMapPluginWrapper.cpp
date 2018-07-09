/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "depthMapPluginWrapper.hpp"
#include "DepthMapPluginController.hpp"
#include "wrapperTemplate.hpp"


int DepthMapVisualization_updateDepthMap(const char* pluginName, const base::samples::DepthMap& map)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", map);
}

int DepthMapVisualization_updatePose(const char* pluginName, const base::samples::RigidBodyState& state)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", state);
}
