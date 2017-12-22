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
 * A class that manages a vizkit3d SonarBeamVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef SONARBEAMPLUGINCONTROLLER_HPP
#define SONARBEAMPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/SonarBeamVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a SonarBeamVisualization plugin for use from TASTE
class SonarBeamPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    SonarBeamPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~SonarBeamPluginController();
    
    // Update functions
    void updateSonarBeam(const base::samples::SonarBeam& beam);
    void updateOrientation(const base::samples::RigidBodyState& beam);

    void updateData(const base::samples::SonarBeam& beam) { updateSonarBeam(beam); }
    void updateData(const base::samples::RigidBodyState& state) { updateOrientation(state); }

private:
    // Vizkit plugin
    vizkit3d::SonarBeamVisualization* m_pPlugin;
};

#endif //SONARBEAMPLUGINCONTROLLER_HPP
