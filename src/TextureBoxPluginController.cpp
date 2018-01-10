/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "TextureBoxPluginController.hpp"
#include <fstream>
#include <sstream>

TextureBoxPluginController::TextureBoxPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("TextureBoxVisualization"));
 
    // Plugin type and name
    setType("TextureBoxVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");
    
    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::TextureBoxVisualization*>(widget.loadPlugin("vizkit3d", "TextureBoxVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin TextureBoxVisualization from vizkit3d failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    QColor colorVal;
    
    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("px"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTexBoxPx(doubleVal);
            }
        }
        else if (!key.compare("py"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTexBoxPy(doubleVal);
            }
        }
        else if (!key.compare("pz"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTexBoxPz(doubleVal);
            }
        }
        else if (!key.compare("sx"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTexBoxSx(doubleVal);
            }
        }
        else if (!key.compare("sy"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTexBoxSy(doubleVal);
            }
        }
        else if (!key.compare("filename"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                try
                {
                    // Workaround for possible Vizkit bug: check that file exists, otherwise
                    // setTexBoxFilename might fail with SIGSEGV (instead of throwing an exception)
                    std::ifstream file(strVal);
                    if (file.good())
                    {
                        file.close();
                        m_pPlugin->setTexBoxFilename(QString::fromStdString(strVal));
                    }
                }
                catch (const std::exception& e)
                {
                    std::stringstream msg;
                    msg << "vizkit3d_c: error loading file " << strVal << 
                        "in TextureBoxVisualization plugin: " << e.what();
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

TextureBoxPluginController::~TextureBoxPluginController()
{
}
