/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef TRAJECTORYPLUGINWRAPPER_H
#define TRAJECTORYPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "base_support/baseTypes.h"

// Update function: returns VIZTASTE_XXX
int TrajectoryVisualization_updateTrajectory(const char* pluginName, const asn1SccVector3d* vector);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //TRAJECTORYPLUGINWRAPPER_H
