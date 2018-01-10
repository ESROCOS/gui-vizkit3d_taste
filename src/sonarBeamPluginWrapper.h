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

#include "base_support/baseTypes.h"
#include "sensor_samples_support/sensorSamplesTypes.h"

// Update function: returns VIZTASTE_XXX
int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const asn1SccSonarBeam* beam);
int SonarBeamVisualization_updateOrientation(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //SONARBEAMPLUGINWRAPPER_H
