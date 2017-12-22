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
 * C interface wrapper for a RobotVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "robotPluginWrapper.h"
#include "RobotPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1JointsConvert.hpp"
#include "asn1_types_support/asn1RigidBodyStateConvert.hpp"


int RobotVisualization_updateJoints(const char* pluginName, const asn1SccJoints* joints)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", joints, Joints_fromAsn1);
}

int RobotVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<RobotPluginController>(pluginName, "RobotVisualization", state, RigidBodyState_fromAsn1);
}
