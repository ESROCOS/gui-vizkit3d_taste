/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "GridPluginController.hpp"
#include <sstream>

GridPluginController::GridPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("GridVisualization"));
 
    // Plugin type and name
    setType("GridVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");
   
    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::GridVisualization*>(widget.loadPlugin("vizkit3d", "GridVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin GridVisualization from vizkit3d failed");
    }

    // Apply configuration

    std::string strVal;
    bool boolVal;
    int intVal;
    double doubleVal;
    QColor colorVal;
    
    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("show_coordinates"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setShowCoordinates(boolVal);
            }
        }
        else if (!key.compare("rows"))
        {
            if (getIntParam(intVal, config, key, getLabel()))
            {
                m_pPlugin->setGridRows(intVal);
            }
        }
        else if (!key.compare("cols"))
        {
            if (getIntParam(intVal, config, key, getLabel()))
            {
                m_pPlugin->setGridCols(intVal);
            }
        }
        else if (!key.compare("dx"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setGridDx(doubleVal);
            }
        }
        else if (!key.compare("dy"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setGridDy(doubleVal);
            }
        }
        else if (!key.compare("color"))
        {
            if (getColorParam(colorVal, config, key, getLabel()))
            {
                m_pPlugin->setGridColor(colorVal);
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

GridPluginController::~GridPluginController()
{
}
