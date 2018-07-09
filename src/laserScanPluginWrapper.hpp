/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef LASERSCANPLUGINWRAPPER_HPP
#define LASERSCANPLUGINWRAPPER_HPP

#include <base/samples/RigidBodyState.hpp>
#include <base/samples/LaserScan.hpp>

// Update function: returns VIZTASTE_XXX
int LaserScanVisualization_updateLaserScan(const char* pluginName, const base::samples::LaserScan& scan);
int LaserScanVisualization_updatePose(const char* pluginName, const base::samples::RigidBodyState& state);

#endif //LASERSCANPLUGINWRAPPER_HPP
