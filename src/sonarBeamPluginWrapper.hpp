/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef SONARBEAMPLUGINWRAPPER_HPP
#define SONARBEAMPLUGINWRAPPER_HPP

#include <base/samples/SonarBeam.hpp>
#include <base/samples/RigidBodyState.hpp>

// Update function: returns VIZTASTE_XXX
int SonarBeamVisualization_updateSonarBeam(const char* pluginName, const base::samples::SonarBeam& beam);
int SonarBeamVisualization_updateOrientation(const char* pluginName, const base::samples::RigidBodyState& state);

#endif //SONARBEAMPLUGINWRAPPER_HPP
