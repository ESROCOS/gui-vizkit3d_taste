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
 * A class that manages a vizkit3d TextureBoxVisualizationPlugin (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
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
