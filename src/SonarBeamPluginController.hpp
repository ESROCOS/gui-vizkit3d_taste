/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

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
