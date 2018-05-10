/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef POINTCLOUDPLUGINWRAPPER_H
#define POINTCLOUDPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int PointcloudVisualization_updatePointCloud(const char* pluginName, const asn1_Pointcloud* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //POINTCLOUDPLUGINWRAPPER_H
