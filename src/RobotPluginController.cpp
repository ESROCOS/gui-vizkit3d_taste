/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "RobotPluginController.hpp"
#include <fstream>

RobotPluginController::RobotPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("RobotVisualization"));
    
    // Plugin type and name
    setType("RobotVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::RobotVisualization*>(
            widget.loadPlugin("robot_model", "RobotVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin RobotVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    bool boolVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("modelFile"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                try
                {
                    // Workaround for possible Vizkit bug: check that file exists, otherwise
                    // setModelFile fails with SIGSEGV (instead of throwing an exception)
                    //std::ifstream file(strVal);
                    //if (file.good())
                    //{
                    //    file.close();
                        m_pPlugin->setModelFile(QString::fromStdString(strVal));
                    //}
                }
                catch (const std::exception& e)
                {
                    std::stringstream msg;
                    msg << "vizkit3d_c: error loading model " << strVal << 
                        "in RobotVisualization plugin: " << e.what();
                    printMsg(msg.str());
                }
            }
        }
        else if (!key.compare("framesEnabled"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setFramesEnabled(boolVal);
            }
        }
        else if (!key.compare("jointsSize"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setJointsSize(doubleVal);
            }
        }
        else if (!key.compare("followModelWithCamera"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setFollowModelWithCamera(boolVal);
            }
        }
        else if (!key.compare("rootLink"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                m_pPlugin->setRootLink(QString::fromStdString(strVal));
            }
        }
        else if (!key.compare("segmentNamesEnabled"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setSegmentNamesEnabled(boolVal);
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


RobotPluginController::~RobotPluginController()
{
}

void RobotPluginController::updateJoints(const base::samples::Joints& joints)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateData(joints);
}

void RobotPluginController::updateRigidBodyState(const base::samples::RigidBodyState& state)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateData(state);
}
