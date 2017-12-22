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
 * A class that manages a vizkit3d WaypointVisualizationPlugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "WaypointPluginController.hpp"
#include <fstream>

WaypointPluginController::WaypointPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("WaypointVisualization"));
    
    // Plugin type and name
    setType("WaypointVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::WaypointVisualization*>(
            widget.loadPlugin("base", "WaypointVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin WaypointVisualization from base failed");
    }

    // Apply configuration

    QColor colorVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("Color"))
        {
            if (getColorParam(colorVal, config, key, getLabel()))
            {
                m_pPlugin->setColor(colorVal);
            }
        }
        else if (!key.compare("frame"))
        {
            QString frameName = QString::fromStdString(getName());
            QString baseFrame;
            QVector3D position;
            QQuaternion rotation;

            auto frameConfig = config["frame"];
            if (getFrameParam(frameName, baseFrame, position, rotation, frameConfig, getLabel()))
            {
                widget.setTransformation(baseFrame, frameName, position, rotation);
                widget.setPluginDataFrame(frameName, m_pPlugin);
            }
        }
        else if (key.compare("name") && key.compare("type")) // ignore, processed earlier
        {
            printUnknownParamMsg(key, getLabel());
        }
    }
}


WaypointPluginController::~WaypointPluginController()
{
}

void WaypointPluginController::updateWaypoint(const base::Waypoint& waypoint)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateData(waypoint);
}
