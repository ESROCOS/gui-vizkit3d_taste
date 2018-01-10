/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "LaserScanPluginController.hpp"
#include <fstream>

LaserScanPluginController::LaserScanPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("LaserScanVisualization"));
    
    // Plugin type and name
    setType("LaserScanVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::LaserScanVisualization*>(
            widget.loadPlugin("base", "LaserScanVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin LaserScanVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    bool boolVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("YForward"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setYForwardMode(boolVal);
            }
        }
        else if (!key.compare("Colorize"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setColorize(boolVal);
            }
        }
        else if (!key.compare("ColorizeInterval"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setColorizeInterval(doubleVal);
            }
        }
        else if (!key.compare("ShowPolygon"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setShowPolygon(boolVal);
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


LaserScanPluginController::~LaserScanPluginController()
{
}

void LaserScanPluginController::updateLaserScan(const base::samples::LaserScan& scan)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateLaserScan(scan);
}

void LaserScanPluginController::updatePose(const base::samples::RigidBodyState& state)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updatePose(state);
}
