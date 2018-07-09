/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "robotPluginWrapper.hpp"
#include "RobotPluginController.hpp"
#include "wrapperTemplate.hpp"


int RobotVisualization_updateJoints(const char* pluginName, const base::samples::Joints& joints)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", joints);
}

int RobotVisualization_updateRigidBodyState(const char* pluginName, const base::samples::RigidBodyState& state)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", state);
}
