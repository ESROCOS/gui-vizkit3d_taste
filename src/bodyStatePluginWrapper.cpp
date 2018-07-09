/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "bodyStatePluginWrapper.hpp"
#include "BodyStatePluginController.hpp"
#include "wrapperTemplate.hpp"


int BodyStateVisualization_updateBodyState(const char* pluginName, const base::samples::BodyState& state)
{
    return updatePluginData<BodyStatePluginController>(pluginName, "BodyStateVisualization", state);
}
