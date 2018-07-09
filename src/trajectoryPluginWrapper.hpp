/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef TRAJECTORYPLUGINWRAPPER_HPP
#define TRAJECTORYPLUGINWRAPPER_HPP

#include <base/Eigen.hpp>
#include <base/geometry/Spline.hpp>

// Update functions: returns VIZTASTE_XXX
int TrajectoryVisualization_updateTrajectory(const char* pluginName, const base::Vector3d& vector);
int TrajectoryVisualization_updateTrajectory(const char* pluginName, const base::geometry::Spline<3>& vector);

#endif //TRAJECTORYPLUGINWRAPPER_HPP
