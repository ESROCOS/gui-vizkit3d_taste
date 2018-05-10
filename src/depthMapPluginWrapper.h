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

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int DepthMapVisualization_updateDepthMap(const char* pluginName, const asn1_DepthMap* map);
int DepthMapVisualization_updatePose(const char* pluginName, const asn1_RigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //DEPTHMAPPLUGINWRAPPER_H
