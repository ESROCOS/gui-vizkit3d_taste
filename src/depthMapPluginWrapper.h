/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef DEPTHMAPPLUGINWRAPPER_H
#define DEPTHMAPPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "base_support/baseTypes.h"
#include "sensor_samples_support/sensorSamplesTypes.h"

// Update function: returns VIZTASTE_XXX
int DepthMapVisualization_updateDepthMap(const char* pluginName, const asn1SccDepthMap* map);
int DepthMapVisualization_updatePose(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //DEPTHMAPPLUGINWRAPPER_H
