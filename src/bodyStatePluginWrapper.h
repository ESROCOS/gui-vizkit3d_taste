/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef BODYSTATEPLUGINWRAPPER_H
#define BODYSTATEPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "base_support/baseTypes.h"

// Update function: returns VIZTASTE_XXX
int BodyStateVisualization_updateBodyState(const char* pluginName, const asn1SccBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //BODYSTATEPLUGINWRAPPER_H
