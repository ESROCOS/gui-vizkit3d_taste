/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef LASERSCANPLUGINWRAPPER_H
#define LASERSCANPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int LaserScanVisualization_updateLaserScan(const char* pluginName, const asn1_LaserScan* scan);
int LaserScanVisualization_updatePose(const char* pluginName, const asn1_RigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //LASERSCANPLUGINWRAPPER_H
