/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef SONARBEAMPLUGINWRAPPER_H
#define SONARBEAMPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1_SonarBeam* beam);
int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1_RigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //SONARBEAMPLUGINWRAPPER_H
