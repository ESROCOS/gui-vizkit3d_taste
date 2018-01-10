/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef ROBOTPLUGINCONTROLLER_HPP
#define ROBOTPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/RobotVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a RobotVisualization plugin for use from TASTE
class RobotPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    RobotPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~RobotPluginController();
    
    // Update functions
    void updateJoints(const base::samples::Joints& joints);
    void updateRigidBodyState(const base::samples::RigidBodyState& state);

    void updateData(const base::samples::Joints& joints) { updateJoints(joints); }
    void updateData(const base::samples::RigidBodyState& state) { updateRigidBodyState(state); }

private:
    // Vizkit plugin
    vizkit3d::RobotVisualization* m_pPlugin;
};

#endif //ROBOTPLUGINCONTROLLER_HPP
