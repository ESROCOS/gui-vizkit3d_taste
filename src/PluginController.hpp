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
 * Parent class for vizkit3d plugin controller classes (implementation).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
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
