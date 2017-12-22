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
 * A class that manages a vizkit3d BodyStateVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef BODYSTATEPLUGINCONTROLLER_HPP
#define BODYSTATEPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/BodyStateVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a BodyStateVisualization plugin for use from TASTE
class BodyStatePluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    BodyStatePluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~BodyStatePluginController();
    
    // Update functions
    void updateBodyState(const base::samples::BodyState& state);

    void updateData(const base::samples::BodyState& state) { updateBodyState(state); }

private:
    // Vizkit plugin
    vizkit3d::BodyStateVisualization* m_pPlugin;
};

#endif //BODYSTATEPLUGINCONTROLLER_HPP
