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

#include "base_support/baseTypes.h"
#include "sensor_samples_support/sensorSamplesTypes.h"

// Update function: returns VIZTASTE_XXX
int PointcloudVisualization_updatePointCloud(const char* pluginName, const asn1SccPointcloud* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //POINTCLOUDPLUGINWRAPPER_H
