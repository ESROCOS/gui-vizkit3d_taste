/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef RIGIDBODYSTATEPLUGINWRAPPER_H
#define RIGIDBODYSTATEPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const asn1_RigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //RIGIDBODYSTATEPLUGINWRAPPER_H
