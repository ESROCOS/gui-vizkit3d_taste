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
#include "PluginController.hpp"
#include <cstring>
#include <cstdlib>

PluginController::PluginController()
: m_name("")
, m_type("")
, m_label("plugin")
{
}

PluginController::~PluginController()
{
}

const std::string& PluginController::getName() const
{
    return m_name;
}

void PluginController::setName(const std::string& name)
{
    m_name = name;
}

const std::string& PluginController::getType() const
{
    return m_type;
}

void PluginController::setType(const std::string& type)
{
    m_type = type;
}

const std::string& PluginController::getLabel() const
{
    return m_label;
}

void PluginController::setLabel(const std::string& label)
{
    m_label = label;
}

void PluginController::setNameFromConfig(YAML::Node& config)
{
    YAML::Node nameConfig = config["name"];
    if (NULL != nameConfig)
    {
        std::string name = nameConfig.as<std::string>();
        setName(name);
    }
    else
    {
        // Set a default name, using the type if available
        static int autoNameCount = 1;
        std::stringstream autoName;

        if (getType().length() > 0)
        {
            autoName << getType() << "_";
        }
        else
        {
            autoName << "Vizkit3DPlugin_";
        }
        autoName << autoNameCount++;
        setName(autoName.str());
    }
}

