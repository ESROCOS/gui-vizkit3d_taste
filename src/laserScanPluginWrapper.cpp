/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "laserScanPluginWrapper.hpp"
#include "LaserScanPluginController.hpp"
#include "wrapperTemplate.hpp"


int LaserScanVisualization_updateLaserScan(const char* pluginName, const base::samples::LaserScan& scan)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", scan);
}

int LaserScanVisualization_updatePose(const char* pluginName, const base::samples::RigidBodyState& state)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", state);
}
