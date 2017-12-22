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
 * C interface wrapper for a WaypointVisualization plugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "waypointPluginWrapper.h"
#include "WaypointPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "asn1_types_support/asn1WaypointConvert.hpp"


int WaypointVisualization_updateWaypoint(const char* pluginName, const asn1SccWaypoint* waypoint)
{
    return updatePluginData<WaypointPluginController>(pluginName, "WaypointVisualization", waypoint, Waypoint_fromAsn1);
}
