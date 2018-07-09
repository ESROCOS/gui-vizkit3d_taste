/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef MOTIONCOMMANDPLUGINWRAPPER_HPP
#define MOTIONCOMMANDPLUGINWRAPPER_HPP

#include <base/commands/Motion2D.hpp>
#include <base/Pose.hpp>

// Update function: returns VIZTASTE_XXX
int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const base::commands::Motion2D& command);
int MotionCommandVisualization_updatePose(const char* pluginName, const base::Pose& pose);

#endif //MOTIONCOMMANDPLUGINWRAPPER_HPP
