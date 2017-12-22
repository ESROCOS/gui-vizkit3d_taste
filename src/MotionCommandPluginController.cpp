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
 * A class that manages a vizkit3d MotionCommandVisualizationPlugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "MotionCommandPluginController.hpp"
#include <fstream>

MotionCommandPluginController::MotionCommandPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("MotionCommandVisualization"));
    
    // Plugin type and name
    setType("MotionCommandVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::MotionCommandVisualization*>(
            widget.loadPlugin("base", "MotionCommandVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin MotionCommandVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("FrontAxis"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                if (!strVal.compare("x") || !strVal.compare("X"))
                {
                    m_pPlugin->setFrontAxis(vizkit3d::MotionCommandVisualization::FrontAxisX);
                }
                else if (!strVal.compare("y") || !strVal.compare("Y"))
                {
                    m_pPlugin->setFrontAxis(vizkit3d::MotionCommandVisualization::FrontAxisY);
                }
                else
                {
                    printMsg("invalid value for property FrontAxis in MotionCommandVisualization; expected \"X\" or \"Y\"");
                }
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


MotionCommandPluginController::~MotionCommandPluginController()
{
}

void MotionCommandPluginController::updateMotionCommand(const base::commands::Motion2D& command)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateMotionCommand(command);
}

void MotionCommandPluginController::updatePose(const base::Pose& pose)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updatePose(pose);
}
