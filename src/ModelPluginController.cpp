/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "ModelPluginController.hpp"
#include <fstream>
#include <sstream>

ModelPluginController::ModelPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("ModelVisualization"));
 
    // Plugin type and name
    setType("ModelVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");
    
    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::ModelVisualization*>(widget.loadPlugin("vizkit3d", "ModelVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin ModelVisualization from vizkit3d failed");
    }

    // Apply configuration

    std::string strVal;
    QColor colorVal;
    
    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("modelPath"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                try
                {
                    // Workaround for possible Vizkit bug: check that file exists, otherwise
                    // setModelPath might fail with SIGSEGV (instead of throwing an exception)
                    std::ifstream file(strVal);
                    if (file.good())
                    {
                        file.close();
                        m_pPlugin->setModelPath(QString::fromStdString(strVal));
                    }
                }
                catch (const std::exception& e)
                {
                    std::stringstream msg;
                    msg << "vizkit3d_c: error loading model " << strVal << 
                        "in ModelVisualization plugin: " << e.what();
                    printMsg(msg.str());
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

ModelPluginController::~ModelPluginController()
{
}
