/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "waypointPluginWrapper.h"
#include "WaypointPluginController.hpp"
#include "wrapperTemplate.hpp"
#include "base_support/asn1WaypointConvert.hpp"


int WaypointVisualization_updateWaypoint(const char* pluginName, const asn1SccWaypoint* waypoint)
{
    return updatePluginData<WaypointPluginController>(pluginName, "WaypointVisualization", waypoint, Waypoint_fromAsn1);
}
