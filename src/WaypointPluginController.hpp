/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef WAYPOINTPLUGINCONTROLLER_HPP
#define WAYPOINTPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/WaypointVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a WaypointVisualization plugin for use from TASTE
class WaypointPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    WaypointPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~WaypointPluginController();
    
    // Update functions
    void updateWaypoint(const base::Waypoint& state);

    void updateData(const base::Waypoint& state) { updateWaypoint(state); }

private:
    // Vizkit plugin
    vizkit3d::WaypointVisualization* m_pPlugin;
};

#endif //WAYPOINTPLUGINCONTROLLER_HPP
