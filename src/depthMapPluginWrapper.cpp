/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "depthMapPluginWrapper.h"
#include "DepthMapPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int DepthMapVisualization_updateDepthMap(const char* pluginName, const asn1_DepthMap* map)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", map, DepthMap_fromAsn1);
}

int DepthMapVisualization_updatePose(const char* pluginName, const asn1_RigidBodyState* state)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", state, RigidBodyState_fromAsn1);
}
