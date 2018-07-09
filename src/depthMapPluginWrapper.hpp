/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef DEPTHMAPPLUGINWRAPPER_HPP
#define DEPTHMAPPLUGINWRAPPER_HPP

#include <base/samples/RigidBodyState.hpp>
#include <base/samples/DepthMap.hpp>

// Update function: returns VIZTASTE_XXX
int DepthMapVisualization_updateDepthMap(const char* pluginName, const base::samples::DepthMap& map);
int DepthMapVisualization_updatePose(const char* pluginName, const base::samples::RigidBodyState& state);

#endif //DEPTHMAPPLUGINWRAPPER_HPP
