/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef WAYPOINTPLUGINWRAPPER_HPP
#define WAYPOINTPLUGINWRAPPER_HPP

#include <base/Waypoint.hpp>

// Update function: returns VIZTASTE_XXX
int WaypointVisualization_updateWaypoint(const char* pluginName, const base::Waypoint& waypoint);

#endif //WAYPOINTPLUGINWRAPPER_HPP
