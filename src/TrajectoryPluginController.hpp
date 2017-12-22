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
 * A class that manages a vizkit3d TrajectoryVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef TRAJECTORYPLUGINCONTROLLER_HPP
#define TRAJECTORYPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/TrajectoryVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a TrajectoryVisualization plugin for use from TASTE
class TrajectoryPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    TrajectoryPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~TrajectoryPluginController();
    
    // Update functions
    void updateTrajectory(const base::Vector3d& vector);

    void updateData(const base::Vector3d& vector) { updateTrajectory(vector); }

    // updateSpline not added, missing data type

private:
    // Vizkit plugin
    vizkit3d::TrajectoryVisualization* m_pPlugin;
};

#endif //TRAJECTORYPLUGINCONTROLLER_HPP
