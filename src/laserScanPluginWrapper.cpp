/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "laserScanPluginWrapper.h"
#include "LaserScanPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "sensor_samples_support/asn1LaserScanConvert.hpp"
#include "base_support/asn1RigidBodyStateConvert.hpp"


int LaserScanVisualization_updateLaserScan(const char* pluginName, const asn1SccLaserScan* scan)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", scan, LaserScan_fromAsn1);
}

int LaserScanVisualization_updatePose(const char* pluginName, const asn1SccRigidBodyState* state)
{
    return updatePluginData<LaserScanPluginController>(pluginName, "LaserScanVisualization", state, RigidBodyState_fromAsn1);
}
