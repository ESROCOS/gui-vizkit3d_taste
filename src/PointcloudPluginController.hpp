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
 * A class that manages a vizkit3d PointcloudVisualizationPlugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef POINTCLOUDPLUGINCONTROLLER_HPP
#define POINTCLOUDPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/PointcloudVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a PointcloudVisualization plugin for use from TASTE
class PointcloudPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    PointcloudPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~PointcloudPluginController();
    
    // Update functions
    void updatePointCloud(const base::samples::Pointcloud& cloud);

    void updateData(const base::samples::Pointcloud& cloud) { updatePointCloud(cloud); }

private:
    // Vizkit plugin
    vizkit3d::PointcloudVisualization* m_pPlugin;
};

#endif //POINTCLOUDPLUGINCONTROLLER_HPP
