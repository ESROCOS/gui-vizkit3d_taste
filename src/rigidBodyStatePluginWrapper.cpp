/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "rigidBodyStatePluginWrapper.h"
#include "RigidBodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const asn1_RigidBodyState* state)
{
    return updatePluginData<RigidBodyStatePluginController>(pluginName, "RigidBodyStateVisualization", state, RigidBodyState_fromAsn1);
}
