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
 * A class that manages a vizkit3d GridVisualizationPlugin (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
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
