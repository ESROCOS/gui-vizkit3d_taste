/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "motionCommandPluginWrapper.hpp"
#include "MotionCommandPluginController.hpp"
#include "wrapperTemplate.hpp"


int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const base::commands::Motion2D& command)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", command);
}

int MotionCommandVisualization_updatePose(const char* pluginName, const base::Pose& pose)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", pose);
}
