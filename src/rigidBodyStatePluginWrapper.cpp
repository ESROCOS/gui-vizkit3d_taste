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
 * C interface wrapper for a RigidBodyStateVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "rigidBodyStatePluginWrapper.h"
#include "RigidBodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1RigidBodyStateConvert.hpp"


int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<RigidBodyStatePluginController>(pluginName, "RigidBodyStateVisualization", state, RigidBodyState_fromAsn1);
}
