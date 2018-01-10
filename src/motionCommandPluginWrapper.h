/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef MOTIONCOMMANDPLUGINWRAPPER_H
#define MOTIONCOMMANDPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif
#include "base_support/baseTypes.h"

// Update function: returns VIZTASTE_XXX
int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1SccMotion2D* command);
int MotionCommandVisualization_updatePose(const char* pluginName, const asn1SccPose* pose);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //MOTIONCOMMANDPLUGINWRAPPER_H
