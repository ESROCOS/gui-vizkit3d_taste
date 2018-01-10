/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef MOTIONCOMMANDPLUGINCONTROLLER_HPP
#define MOTIONCOMMANDPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/MotionCommandVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a MotionCommandVisualization plugin for use from TASTE
class MotionCommandPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    MotionCommandPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~MotionCommandPluginController();
    
    // Update functions
    void updateMotionCommand(const base::commands::Motion2D& command);
    void updatePose(const base::Pose& pose);

    void updateData(const base::commands::Motion2D& command) { updateMotionCommand(command); }
    void updateData(const base::Pose& pose) { updatePose(pose); }

private:
    // Vizkit plugin
    vizkit3d::MotionCommandVisualization* m_pPlugin;
};

#endif //MOTIONCOMMANDPLUGINCONTROLLER_HPP
