/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "motionCommandPluginWrapper.h"
#include "MotionCommandPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1_Motion2D* command)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", command, Motion2D_fromAsn1);
}

int MotionCommandVisualization_updatePose(const char* pluginName, const asn1_Pose* pose)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", pose, Pose_fromAsn1);
}
