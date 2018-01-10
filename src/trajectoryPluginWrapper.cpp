/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "trajectoryPluginWrapper.h"
#include "TrajectoryPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1Vector3dConvert.hpp"


int TrajectoryVisualization_updateTrajectory(const char* pluginName, const asn1SccVector3d* vector)
{
    return updatePluginData<TrajectoryPluginController>(pluginName, "TrajectoryVisualization", vector, Vector3d_fromAsn1);
}
