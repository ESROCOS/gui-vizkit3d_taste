/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "robotPluginWrapper.h"
#include "RobotPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1JointsConvert.hpp"
#include "base_support/asn1RigidBodyStateConvert.hpp"


int RobotVisualization_updateJoints(const char* pluginName, const asn1SccJoints* joints)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", joints, Joints_fromAsn1);
}

int RobotVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", state, RigidBodyState_fromAsn1);
}
