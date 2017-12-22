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
 * A class that manages a vizkit3d RigidBodyStateVisualizationPlugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "RigidBodyStatePluginController.hpp"
#include <fstream>

RigidBodyStatePluginController::RigidBodyStatePluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("RigidBodyStateVisualization"));
    
    // Plugin type and name
    setType("RigidBodyStateVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::RigidBodyStateVisualization*>(
            widget.loadPlugin("base", "RigidBodyStateVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin RigidBodyStateVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    bool boolVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("size"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setSize(doubleVal);
            }
        }
        else if (!key.compare("sphereSize"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setMainSphereSize(doubleVal);
            }
        }
        else if (!key.compare("textSize"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setTextSize(doubleVal);
            }
        }
        else if (!key.compare("displayCovariance"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->displayCovariance(boolVal);
            }
        }
        else if (!key.compare("displayCovarianceWithSamples"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->displayCovarianceWithSamples(boolVal);
            }
        }
        else if (!key.compare("forcePositionDisplay"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setPositionDisplayForceFlag(boolVal);
            }
        }
        else if (!key.compare("forceOrientationDisplay"))
        {
            if (getBoolParam(boolVal, config, key, getLabel()))
            {
                m_pPlugin->setOrientationDisplayForceFlag(boolVal);
            }
        }
        else if (!key.compare("modelPath"))
        {
            if (getStringParam(strVal, config, key, getLabel()))
            {
                try
                {
                    // Workaround for possible Vizkit bug: check that file exists, otherwise
                    // loadModel fails with SIGSEGV (instead of throwing an exception)
                    std::ifstream file(strVal);
                    if (file.good())
                    {
                        file.close();
                        m_pPlugin->loadModel(strVal);
                    }
                }
                catch (const std::exception& e)
                {
                    std::stringstream msg;
                    msg << "vizkit3d_c: error loading model " << strVal << 
                        "in RigidBodyStateVisualization plugin: " << e.what();
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


RigidBodyStatePluginController::~RigidBodyStatePluginController()
{
}

void RigidBodyStatePluginController::updateRigidBodyState(const base::samples::RigidBodyState& state)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateRigidBodyState(state);
}
