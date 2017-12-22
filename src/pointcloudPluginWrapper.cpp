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
 * C interface wrapper for a PointcloudVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "pointcloudPluginWrapper.h"
#include "PointcloudPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1PointcloudConvert.hpp"


int PointcloudVisualization_updatePointCloud(const char* pluginName, const asn1SccPointcloud* state)
{
    return updatePluginData<PointcloudPluginController>(pluginName, "PointCloudVisualization", state, Pointcloud_fromAsn1);
}
