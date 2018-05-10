/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "pointcloudPluginWrapper.h"
#include "PointcloudPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int PointcloudVisualization_updatePointCloud(const char* pluginName, const asn1_Pointcloud* state)
{
    return updatePluginData<PointcloudPluginController>(pluginName, "PointCloudVisualization", state, Pointcloud_fromAsn1);
}
