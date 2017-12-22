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
 * Singleton class that gives access to a vizkit3d instance 
 * (implemantation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "VizkitInstance.hpp"
#include "BodyStatePluginController.hpp"
#include "DepthMapPluginController.hpp"
#include "GridPluginController.hpp"
#include "LaserScanPluginController.hpp"
#include "ModelPluginController.hpp"
#include "MotionCommandPluginController.hpp"
#include "PluginController.hpp"
#include "PointcloudPluginController.hpp"
#include "RigidBodyStatePluginController.hpp"
#include "RobotPluginController.hpp"
#include "SonarBeamPluginController.hpp"
#include "TextureBoxPluginController.hpp"
#include "TrajectoryPluginController.hpp"
#include "WaypointPluginController.hpp"
#include <QApplication>
#include <iostream>
#include <sstream>
#include <cassert>


VizkitInstance::VizkitInstance()
: m_vizkitThread()
, m_mutex()
, m_waitInit()
, m_mutexInit()
, m_configFile(NULL)
, m_plugins()
, m_threadStatus(UNINITIALIZED)
{
}

VizkitInstance::~VizkitInstance()
{
    if (NULL != m_configFile)
    {
        delete m_configFile;
    }
    
    // The plugin objects are deleted at lower level by the Vizkit3D
    // window (TBC)
    //for (auto ptr: m_plugins)
    //{
    //    delete ptr;
    //}
    m_plugins.clear();
}

VizkitInstance& VizkitInstance::getInstance()
{
    // Singleton instance (thread safe in C++11 or g++)
    static VizkitInstance theInstance;
    
    if (TERMINATED == theInstance.m_threadStatus)
    {
        // This happens if Qt application destroyed, but threads keep 
        // calling getInstance
        throw Terminated();
    }
    else if (FAILED == theInstance.m_threadStatus)
    {
        // This happens if the vizkit thread failed 
        throw InitFailed();
    }
    
    return theInstance;
}


void VizkitInstance::initializeOnce(const char* configFile)
{
    bool initVizkit = false;
    
    {
        std::lock_guard<std::recursive_mutex> guard(m_mutex);
        
        if (NULL == m_configFile)
        {
            m_configFile = strdup(configFile);
            initVizkit = true;
        }
        else
        {
            if (strcmp(configFile, m_configFile))
            {
                // Trying to set a different configuration file
                throw std::runtime_error("Only one Vizkit configuration file per executable can be set");
            }
            // else the configuration is already set, so do nothing.
        }
    }

    if (initVizkit)
    {
        // Launch thread, which reads it and runs the Qt mainl loop
        m_vizkitThread = std::thread(&VizkitInstance::threadBody, std::ref(*this));
        
        // Wait for Vizkit initialization
        std::unique_lock<std::mutex> lock(m_mutexInit);
        while (UNINITIALIZED == m_threadStatus)
        {
            m_waitInit.wait(lock);
        }

        if (RUNNING == m_threadStatus)
        {
            m_vizkitThread.detach();
        }
        else
        {
            throw InitFailed();
        }
    }
}

PluginController* VizkitInstance::getPlugin(const char* id)
{
    assert(NULL != m_configFile); // check initialized

    std::lock_guard<std::recursive_mutex> guard(m_mutex);

    for (auto ptr: m_plugins)
    {
        if (!ptr->getName().compare(id))
        {
            return ptr;
        }
    }
    
    return NULL;
}

void VizkitInstance::deletePlugin(const char* id)
{
    assert(NULL != m_configFile); // check initialized

    std::lock_guard<std::recursive_mutex> guard(m_mutex);

    for (auto it = m_plugins.begin(); it != m_plugins.end(); it++)
    {
        PluginController* ptr = *it;
        if (!ptr->getName().compare(id))
        {
            delete ptr;
            m_plugins.erase(it);
            break;
        }
    }
}

// Vizkit runs in a dedicated thread (we can't use the main thread 
// because that's controlled by TASTE, but it's OK as long as we do 
// all the Qt operations from the same thread)
void VizkitInstance::threadBody()
{
    assert(NULL != m_configFile); // check initialized
    
    YAML::Node config;
    // Load configuration
    try
    {
        config = loadYamlFile(m_configFile);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error loading vizkit3d configuration file " << m_configFile << ": " 
            << e.what() << std::endl;

        // End thread with failure
        m_threadStatus = FAILED;
        return;
    }

    // QT Main application
    int argc = 0;
    QApplication app(argc, NULL);

    // Application window
    vizkit3d::QVizkitMainWindow window;
    if (auto windowConfig = config["window"])
    {
        configureWindow(window, windowConfig);
    }
    else
    {
        printMsg("no configuration for window found in ", m_configFile);
    }

    // Widget. The Widget to load the vizkit3d  plugins
    vizkit3d::Vizkit3DWidget* widget = window.getVizkitWidget();
    if (auto widgetConfig = config["widget"])
    {
        configureWidget(*widget, widgetConfig);
    }
    else
    {
        printMsg("no configuration for widget found in ", m_configFile);
    }

    // List of plugins
    if (auto pluginsConfig = config["plugins"])
    {
        createPlugins(*widget, pluginsConfig);
    }
    else
    {
        printMsg("no configuration for plugins found in ", m_configFile);
    }

    // Show window
    window.show();
    window.update();

    // Signal initialization completed
    {
        std::unique_lock<std::mutex> lock(m_mutexInit);
        m_threadStatus = RUNNING;
        m_waitInit.notify_all();
    }

    // Qt main loop
    app.exec();
    
    // Signal termination
    m_threadStatus = TERMINATED;
}


// Processes the configuration block "window". Options accepted are:
// - title: string
// - x: int
// - y: int
// - width: int
// - height: int
void VizkitInstance::configureWindow(vizkit3d::QVizkitMainWindow& window, YAML::Node& config)
{
    assert(NULL != m_configFile); // check initialized
    
    bool setPosition = false;
    int x = window.x();
    int y = window.y();
    bool setSize = false;
    int w = window.width();
    int h = window.height();

    std::string strVal;
    int intVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("title"))
        {
            if (getStringParam(strVal, config, key, "window"))
            {
                window.setWindowTitle(QString::fromStdString(strVal));
            }
        }
        else if (!key.compare("x"))
        {
            if (getIntParam(intVal, config, key, "window"))
            {
                x = intVal;
                setPosition = true;
            }
        }
        else if (!key.compare("y"))
        {
            if (getIntParam(intVal, config, key, "window"))
            {
                y = intVal;
                setPosition = true;
            }
        }
        else if (!key.compare("width"))
        {
            if (getIntParam(intVal, config, key, "window"))
            {
                w = intVal;
                setSize = true;
            }
        }
        else if (!key.compare("height"))
        {
            if (getIntParam(intVal, config, key, "window"))
            {
                h = intVal;
                setSize = true;
            }
        }
        else
        {
            printUnknownParamMsg(key, "window");
        }
    }
    
    if (setPosition)
    {
        window.move(x, y);
    }

    if (setSize)
    {
        window.resize(w, h);
    }
}


// Processes the configuration block "widget". Options accepted are:
// - axes: bool
// - axes_labels: bool
// - background: int[3], RGB values between 0 and 255
// - manipulator: string, one of the enum strings of vizkit3d::CAMERA_MANIPULATORS
// Not exposed: frame, transformer, transformerTextSize.
// Option environment is managed from the plugin side.
void VizkitInstance::configureWidget(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
{
    assert(NULL != m_configFile); // check initialized
    
    bool boolVal;
    QColor colorVal;
    vizkit3d::CAMERA_MANIPULATORS manipVal;
    
    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("axes"))
        {
            if (getBoolParam(boolVal, config, key, "widget"))
            {
                widget.setAxes(boolVal);
            }
        }
        else if (!key.compare("axes_labels"))
        {
            if (getBoolParam(boolVal, config, key, "widget"))
            {
                widget.setAxesLabels(boolVal);
            }
        }
        else if (!key.compare("background"))
        {
            if (getColorParam(colorVal, config, key, "widget"))
            {
                widget.setBackgroundColor(colorVal);
            }
        }
        else if (!key.compare("manipulator"))
        {
            if (getManipulatorParam(manipVal, config, key, "widget"))
            {
                widget.setCameraManipulator(manipVal);
            }
        }
        else
        {
            printUnknownParamMsg(key, "widget");
        }
    }
}


void VizkitInstance::createPlugins(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
{
    assert(NULL != m_configFile); // check initialized
    
    std::lock_guard<std::recursive_mutex> guard(m_mutex);

    if (!config.IsSequence())
    {
        printMsg("plugins configuration expected as list in ", m_configFile);
    }
    else
    {
        for(size_t i = 0; i < config.size(); i++) 
        {
            YAML::Node ci = config[i];
            
            if (config[i]["type"])
            {
                std::string type;
                if (getStringParam(type, ci, "type", "plugin"))
                {
                    try
                    {
                        if (!type.compare("BodyStateVisualization"))
                        {
                            auto pCtrl = new BodyStatePluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("DepthMapVisualization"))
                        {
                            auto pCtrl = new DepthMapPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("GridVisualization"))
                        {
                            auto pCtrl = new GridPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("LaserScanVisualization"))
                        {
                            auto pCtrl = new LaserScanPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("ModelVisualization"))
                        {
                            auto pCtrl = new ModelPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("MotionCommandVisualization"))
                        {
                            auto pCtrl = new MotionCommandPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("PointcloudVisualization"))
                        {
                            auto pCtrl = new PointcloudPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("RigidBodyStateVisualization"))
                        {
                            auto pCtrl = new RigidBodyStatePluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("RobotVisualization"))
                        {
                            auto pCtrl = new RobotPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("SonarBeamVisualization"))
                        {
                            auto pCtrl = new SonarBeamPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                            
                        }
                        else if (!type.compare("TextureBoxVisualization"))
                        {
                            auto pCtrl = new TextureBoxPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                        }
                        else if (!type.compare("TrajectoryVisualization"))
                        {
                            auto pCtrl = new TrajectoryPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                        }
                        else if (!type.compare("WaypointVisualization"))
                        {
                            auto pCtrl = new WaypointPluginController(widget, ci); // may throw
                            if (NULL != pCtrl)
                            {
                                m_plugins.push_back(pCtrl);
                            }
                        }
                        else 
                        {
                            std::stringstream msg;
                            msg << "unknown plugin type " << type << "; expected values are: "
                                "BodyStateVisualization, "
                                "DepthMapVisualization, "
                                "GridVisualization, "
                                "LaserScanVisualization, "
                                "ModelVisualization, "
                                "MotionCommandVisualization, "
                                "PointcloudVisualization, "
                                "RigidBodyStateVisualization, "
                                "RobotVisualization, "
                                "SonarBeamVisualization, "
                                "TextureBoxVisualization, "
                                "TrajectoryVisualization, "
                                "WaypointVisualization";
                            printMsg(msg.str());
                        }
                    }
                    catch (const std::exception& e)
                    {
                        printMsg(e.what());
                    }
                }
            }
            else
            {
                printMsg("expecting type label for plugin in ", m_configFile);
            }
        }
    }
}

bool VizkitInstance::isRunning() const
{
    return (RUNNING == m_threadStatus);
}
