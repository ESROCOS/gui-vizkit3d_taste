/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "motionCommandPluginWrapper.h"
#include "MotionCommandPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1Motion2DConvert.hpp"
#include "base_support/asn1PoseConvert.hpp"


int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1SccMotion2D* command)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", command, Motion2D_fromAsn1);
}

int MotionCommandVisualization_updatePose(const char* pluginName, const asn1SccPose* pose)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", pose, Pose_fromAsn1);
}
