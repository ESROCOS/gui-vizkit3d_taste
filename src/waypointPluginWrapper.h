/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef WAYPOINTPLUGINWRAPPER_H
#define WAYPOINTPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int WaypointVisualization_updateWaypoint(const char* pluginName, const asn1_Waypoint* waypoint);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //WAYPOINTPLUGINWRAPPER_H
