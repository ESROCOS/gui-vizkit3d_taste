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
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "DepthMapPluginController.hpp"
#include <fstream>

DepthMapPluginController::DepthMapPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("DepthMapVisualization"));
    
    // Plugin type and name
    setType("DepthMapVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::DepthMapVisualization*>(
            widget.loadPlugin("base", "DepthMapVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin DepthMapVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    bool boolVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("ColorizeAltitude"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setColorizeAltitude(boolVal);
            }
        }
        else if (!key.compare("ColorizeMagnitude"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setColorizeMagnitude(boolVal);
            }
        }
        else if (!key.compare("ColorizeInterval"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setColorizeInterval(doubleVal);
            }
        }
        else if (!key.compare("ShowRemission"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setShowRemission(boolVal);
            }
        }
        else if (!key.compare("ShowSlope"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setShowSlope(boolVal);
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


DepthMapPluginController::~DepthMapPluginController()
{
}

void DepthMapPluginController::updateDepthMap(const base::samples::DepthMap& map)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateDepthMap(map);
}

void DepthMapPluginController::updatePose(const base::samples::RigidBodyState& state)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updatePose(state);
}



