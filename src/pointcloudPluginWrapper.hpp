/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef POINTCLOUDPLUGINWRAPPER_HPP
#define POINTCLOUDPLUGINWRAPPER_HPP

#include <base/samples/Pointcloud.hpp>

// Update function: returns VIZTASTE_XXX
int PointcloudVisualization_updatePointCloud(const char* pluginName, const base::samples::Pointcloud& cloud);

#endif //POINTCLOUDPLUGINWRAPPER_HPP
