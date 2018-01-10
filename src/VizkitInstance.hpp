/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef VIZKITINSTANCE_HPP
#define VIZKITINSTANCE_HPP

#include <cstring>
#include <list>
#include <mutex>
#include <thread>
#include <condition_variable>
#include "yaml-cpp/yaml.h"
#include <vizkit3d/QVizkitMainWindow.hpp>
#include "ConfigurationReader.hpp"
#include "PluginController.hpp"

// Manages an instance of Vizkit accessible from TASTE
// It is a singleton, so that it is initialized only once regardless 
// of the order in which the TASTE initialization functions are called.
class VizkitInstance : public ConfigurationReader
{
public:
    // Exceptions are needed because in TASTE we don't control the 
    // termination of threads, so they may call getInstance after the 
    // desctruction of the object.
    // Exception thrown by getInstance if Qt application terminated
    class Terminated: public std::exception 
    {
        virtual const char* what() const throw()
        {
            return "Vizkit instance terminated";
        }
    };
    // Exception thrown by getInstance if Qt thread ended with failure
    class InitFailed: public std::exception 
    {
        virtual const char* what() const throw()
        {
            return "Vizkit initialization failed";
        }
    };
    
    // Get the singleton instance: may throw Terminated exception
    static VizkitInstance& getInstance();
    
    // Destructor
    virtual ~VizkitInstance();
    
    // Initialices and sets the Vizkit configuration. All calls should 
    // be with the same configuration file. Throws if a different file 
    // is passed. The file is read by vizkitThread.
    void initializeOnce(const char* configFile);
    
    // Get plugin by name, returns NULL if not found
    PluginController* getPlugin(const char* id);
    
    // Delete plugin by name
    void deletePlugin(const char* id);
    
    // Check if vizkit is running
    bool isRunning() const;
    
private:
    // Private constructor for singleton behaviour
    VizkitInstance();
    
    // Vizkit thread main function (it's a Qt application, so it must 
    // run in a dedicated thread); the thread is detached
    void threadBody();

    // Apply the configuration file to the different elements
    void configureWindow(vizkit3d::QVizkitMainWindow& window, YAML::Node& config);
    void configureWidget(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    void createPlugins(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    
    std::thread m_vizkitThread;         // vizkit3d Qt thread
    std::recursive_mutex m_mutex;       // mutex for member access
    std::condition_variable m_waitInit; // used for waiting for Vizkit initialization
    std::mutex m_mutexInit;             // mutex for condition variable

    char* m_configFile;         // loaded config file (NULL if none)
    std::list<PluginController*> m_plugins; // list of plugins

    // Status of the Qt thread
    typedef enum
    {
        UNINITIALIZED,  // initial state
        RUNNING,        // initialized and running
        FAILED,         // ended with failure
        TERMINATED      // ended by Qt application termination
    } threadStatus_t;

    volatile threadStatus_t m_threadStatus; // Status of the Qt thread
};


#endif // VIZKITINSTANCE_HPP
