/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "trajectoryPluginWrapper.h"
#include "TrajectoryPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int TrajectoryVisualization_updateTrajectory(const char* pluginName, const asn1_Vector3d* vector)
{
    return updatePluginData<TrajectoryPluginController>(pluginName, "TrajectoryVisualization", vector, Vector3d_fromAsn1);
}
