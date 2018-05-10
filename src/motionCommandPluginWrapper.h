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

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1_Motion2D* command);
int MotionCommandVisualization_updatePose(const char* pluginName, const asn1_Pose* pose);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //MOTIONCOMMANDPLUGINWRAPPER_H
