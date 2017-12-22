/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 * ---------------------------------------------------------------------
 * C interface wrapper for a MotionCommandVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "motionCommandPluginWrapper.h"
#include "MotionCommandPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1Motion2DConvert.hpp"
#include "asn1_types_support/asn1PoseConvert.hpp"


int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1SccMotion2D* command)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", command, Motion2D_fromAsn1);
}

int MotionCommandVisualization_updatePose(const char* pluginName, const asn1SccPose* pose)
{
    return updatePluginData<MotionCommandPluginController>(pluginName, "MotionCommandVisualization", pose, Pose_fromAsn1);
}
