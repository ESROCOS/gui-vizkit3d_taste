/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "waypointPluginWrapper.h"
#include "WaypointPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "typeConversions.hpp"


int WaypointVisualization_updateWaypoint(const char* pluginName, const asn1_Waypoint* waypoint)
{
    return updatePluginData<WaypointPluginController>(pluginName, "WaypointVisualization", waypoint, Waypoint_fromAsn1);
}
