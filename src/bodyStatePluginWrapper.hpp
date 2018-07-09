/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef BODYSTATEPLUGINWRAPPER_HPP
#define BODYSTATEPLUGINWRAPPER_HPP

#include <base/samples/BodyState.hpp>

// Update function: returns VIZTASTE_XXX
int BodyStateVisualization_updateBodyState(const char* pluginName, const base::samples::BodyState& state);

#endif //BODYSTATEPLUGINWRAPPER_HPP
