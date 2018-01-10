/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "rigidBodyStatePluginWrapper.h"
#include "RigidBodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1RigidBodyStateConvert.hpp"


int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<RigidBodyStatePluginController>(pluginName, "RigidBodyStateVisualization", state, RigidBodyState_fromAsn1);
}
