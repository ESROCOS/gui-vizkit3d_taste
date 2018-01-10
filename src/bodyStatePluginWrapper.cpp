/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "bodyStatePluginWrapper.h"
#include "BodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1BodyStateConvert.hpp"


int BodyStateVisualization_updateBodyState(const char* pluginName, const asn1SccBodyState* state)
{
    return updatePluginData<BodyStatePluginController>(pluginName, "BodyStateVisualization", state, BodyState_fromAsn1);
}
