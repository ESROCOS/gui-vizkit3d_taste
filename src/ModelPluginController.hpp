/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef MODELPLUGINCONTROLLER_HPP
#define MODELPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include "vizkit3d/Vizkit3DWidget.hpp"
#include "vizkit3d/ModelVisualization.hpp"
#include "yaml-cpp/yaml.h"

// Manages a vizkit3d ModelVisualizationPlugin
class ModelPluginController: public PluginController
{
public:
    // Constructor: may throw runtime_error exception
    ModelPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~ModelPluginController();

private:
    // Vizkit plugin
    vizkit3d::ModelVisualization* m_pPlugin;
};


#endif //MODELPLUGINCONTROLLER_HPP
