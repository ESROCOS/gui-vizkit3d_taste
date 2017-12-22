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
 * A class that manages a vizkit3d ModelVisualizationPlugin (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
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
