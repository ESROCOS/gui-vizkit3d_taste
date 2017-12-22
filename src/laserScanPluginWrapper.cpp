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
 * C interface wrapper for a LaserScanVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "laserScanPluginWrapper.h"
#include "LaserScanPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1LaserScanConvert.hpp"
#include "asn1_types_support/asn1RigidBodyStateConvert.hpp"


int LaserScanVisualization_updateLaserScan(const char* pluginName, const asn1SccLaserScan* scan)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", scan, LaserScan_fromAsn1);
}

int LaserScanVisualization_updatePose(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", state, RigidBodyState_fromAsn1);
}
