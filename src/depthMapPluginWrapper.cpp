/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 * ---------------------------------------------------------------------
 * C interface wrapper for a DepthMapVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "depthMapPluginWrapper.h"
#include "DepthMapPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1DepthMapConvert.hpp"
#include "asn1_types_support/asn1RigidBodyStateConvert.hpp"


int DepthMapVisualization_updateDepthMap(const char* pluginName, const asn1SccDepthMap* map)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", map, DepthMap_fromAsn1);
}

int DepthMapVisualization_updatePose(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<DepthMapPluginController>(pluginName, "DepthMapVisualization", state, RigidBodyState_fromAsn1);
}
