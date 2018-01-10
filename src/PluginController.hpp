/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef PLUGINCONTROLLER_HPP
#define PLUGINCONTROLLER_HPP

#include "ConfigurationReader.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>

// Parent class for vizkit3d plugin controller classes
class PluginController: public ConfigurationReader
{
public:
    PluginController();
    virtual ~PluginController();
    
    // Reads the name from the configuration, or sets a default one
    // (call after setType)
    void setNameFromConfig(YAML::Node& config);
    
    const std::string& getName() const;
    void setName(const std::string& name);

    const std::string& getType() const;
    void setType(const std::string& type);

    const std::string& getLabel() const;
    void setLabel(const std::string& label);

protected:
    std::string m_name;
    std::string m_type;
    std::string m_label; // Label for messages
};


#endif //PLUGINCONTROLLER_HPP
