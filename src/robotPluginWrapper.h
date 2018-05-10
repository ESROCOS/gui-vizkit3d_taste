/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef ROBOTPLUGINWRAPPER_H
#define ROBOTPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update functions: returns VIZTASTE_XXX
int RobotVisualization_updateJoints(const char* pluginName, const asn1_Joints* joints);
int RobotVisualization_updateRigidBodyState(const char* pluginName, const asn1_RigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ROBOTPLUGINWRAPPER_H
