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
 * A class that manages a vizkit3d RobotVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
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
