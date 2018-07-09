/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "pointcloudPluginWrapper.hpp"
#include "PointcloudPluginController.hpp"
#include "wrapperTemplate.hpp"


int PointcloudVisualization_updatePointCloud(const char* pluginName, const base::samples::Pointcloud& cloud)
{
    return updatePluginData<PointcloudPluginController>(pluginName, "PointCloudVisualization", cloud);
}
