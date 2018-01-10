/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef GRIDPLUGINCONTROLLER_HPP
#define GRIDPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include "vizkit3d/Vizkit3DWidget.hpp"
#include "vizkit3d/GridVisualization.hpp"
#include "yaml-cpp/yaml.h"

// Manages a vizkit3d GridVisualizationPlugin
class GridPluginController: public PluginController
{
public:
    // Constructor: may throw runtime_error exception
    GridPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~GridPluginController();

private:
    // Vizkit plugin
    vizkit3d::GridVisualization* m_pPlugin;
};


#endif //GRIDPLUGINCONTROLLER_HPP
