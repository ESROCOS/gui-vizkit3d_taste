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
 * A class that manages a vizkit3d SonarBeamVisualizationPlugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "SonarBeamPluginController.hpp"
#include <fstream>

SonarBeamPluginController::SonarBeamPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("SonarBeamVisualization"));
    
    // Plugin type and name
    setType("SonarBeamVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::SonarBeamVisualization*>(
            widget.loadPlugin("base", "SonarBeamVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin SonarBeamVisualization from base failed");
    }

    // Apply configuration

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("frame"))
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


SonarBeamPluginController::~SonarBeamPluginController()
{
}

void SonarBeamPluginController::updateSonarBeam(const base::samples::SonarBeam& beam)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateSonarBeam(beam);
}

void SonarBeamPluginController::updateOrientation(const base::samples::RigidBodyState& state)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateOrientation(state);
}
