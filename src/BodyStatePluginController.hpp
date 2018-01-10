/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

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
