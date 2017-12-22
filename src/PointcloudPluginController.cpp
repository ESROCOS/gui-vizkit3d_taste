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
 * A class that manages a vizkit3d PointcloudVisualizationPlugin 
 * (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "PointcloudPluginController.hpp"
#include <fstream>

PointcloudPluginController::PointcloudPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("PointcloudVisualization"));
    
    // Plugin type and name
    setType("PointcloudVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::PointcloudVisualization*>(
            widget.loadPlugin("base", "PointcloudVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin PointcloudVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    double doubleVal;
    QColor colorVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("defaultFeatureColor"))
        {
            if (getColorParam(colorVal, config, key, getLabel()))
            {
                m_pPlugin->setDefaultFeatureColor(colorVal);
            }
        }
        else if (!key.compare("pointSize"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setPointSize(doubleVal);
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


PointcloudPluginController::~PointcloudPluginController()
{
}

void PointcloudPluginController::updatePointCloud(const base::samples::Pointcloud& cloud)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updatePointCloud(cloud);
}
