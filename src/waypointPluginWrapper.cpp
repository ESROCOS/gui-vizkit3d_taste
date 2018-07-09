/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "waypointPluginWrapper.hpp"
#include "WaypointPluginController.hpp"
#include "wrapperTemplate.hpp"


int WaypointVisualization_updateWaypoint(const char* pluginName, const base::Waypoint& waypoint)
{
    return updatePluginData<WaypointPluginController>(pluginName, "WaypointVisualization", waypoint);
}
