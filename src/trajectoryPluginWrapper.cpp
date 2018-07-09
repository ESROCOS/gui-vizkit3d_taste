/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "trajectoryPluginWrapper.hpp"
#include "TrajectoryPluginController.hpp"
#include "wrapperTemplate.hpp"


int TrajectoryVisualization_updateTrajectory(const char* pluginName, const base::Vector3d& vector)
{
    return updatePluginData<TrajectoryPluginController>(pluginName, "TrajectoryVisualization", vector);
}

int TrajectoryVisualization_updateTrajectory(const char* pluginName, const base::geometry::Spline<3>& spline)
{
    return updatePluginData<TrajectoryPluginController>(pluginName, "TrajectoryVisualization", spline);
}
