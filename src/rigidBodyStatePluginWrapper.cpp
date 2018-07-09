/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "rigidBodyStatePluginWrapper.hpp"
#include "RigidBodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"


int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const base::samples::RigidBodyState& state)
{
    return updatePluginData<RigidBodyStatePluginController>(pluginName, "RigidBodyStateVisualization", state);
}
