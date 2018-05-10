/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "robotPluginWrapper.h"
#include "RobotPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int RobotVisualization_updateJoints(const char* pluginName, const asn1_Joints* joints)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", joints, Joints_fromAsn1);
}

int RobotVisualization_updateRigidBodyState(const char* pluginName, const asn1_RigidBodyState* state)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", state, RigidBodyState_fromAsn1);
}
