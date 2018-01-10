/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef RIGIDBODYSTATEPLUGINCONTROLLER_HPP
#define RIGIDBODYSTATEPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/RigidBodyStateVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a RigidBodyStateVisualization plugin for use from TASTE
class RigidBodyStatePluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    RigidBodyStatePluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~RigidBodyStatePluginController();
    
    // Update functions
    void updateRigidBodyState(const base::samples::RigidBodyState& state);

    void updateData(const base::samples::RigidBodyState& state) { updateRigidBodyState(state); }

private:
    // Vizkit plugin
    vizkit3d::RigidBodyStateVisualization* m_pPlugin;
};

#endif //RIGIDBODYSTATEPLUGINCONTROLLER_HPP
