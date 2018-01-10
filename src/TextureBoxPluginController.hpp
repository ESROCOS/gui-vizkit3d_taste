/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef TEXTUREBOXPLUGINCONTROLLER_HPP
#define TEXTUREBOXPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include "vizkit3d/Vizkit3DWidget.hpp"
#include "vizkit3d/TextureBoxVisualization.hpp"
#include "yaml-cpp/yaml.h"

// Manages a vizkit3d TextureBoxVisualizationPlugin
class TextureBoxPluginController: public PluginController
{
public:
    // Constructor: may throw runtime_error exception
    TextureBoxPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~TextureBoxPluginController();

private:
    // Vizkit plugin
    vizkit3d::TextureBoxVisualization* m_pPlugin;
};


#endif //TEXTUREBOXPLUGINCONTROLLER_HPP
