/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

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

    void updateSpline(const base::geometry::Spline<3>& spline);

    void updateData(const base::geometry::Spline<3>& spline) { updateSpline(spline); }

private:
    // Vizkit plugin
    vizkit3d::TrajectoryVisualization* m_pPlugin;
};

#endif //TRAJECTORYPLUGINCONTROLLER_HPP
