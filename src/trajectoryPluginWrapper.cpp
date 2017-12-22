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
 * C interface wrapper for a TrajectoryVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "trajectoryPluginWrapper.h"
#include "TrajectoryPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1Vector3dConvert.hpp"


int TrajectoryVisualization_updateTrajectory(const char* pluginName, const asn1SccVector3d* vector)
{
    return updatePluginData<TrajectoryPluginController>(pluginName, "TrajectoryVisualization", vector, Vector3d_fromAsn1);
}
