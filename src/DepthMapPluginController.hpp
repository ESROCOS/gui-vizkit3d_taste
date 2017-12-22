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
 * A class that manages a vizkit3d DepthMapVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef DEPTHMAPPLUGINCONTROLLER_HPP
#define DEPTHMAPPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/DepthMapVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a DepthMapVisualization plugin for use from TASTE
class DepthMapPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    DepthMapPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~DepthMapPluginController();
    
    // Update functions
    void updateDepthMap(const base::samples::DepthMap& map);
    void updatePose(const base::samples::RigidBodyState& state);

    void updateData(const base::samples::DepthMap& map) { updateDepthMap(map); }
    void updateData(const base::samples::RigidBodyState& state) { updatePose(state); }

private:
    // Vizkit plugin
    vizkit3d::DepthMapVisualization* m_pPlugin;
};

#endif //DEPTHMAPPLUGINCONTROLLER_HPP
