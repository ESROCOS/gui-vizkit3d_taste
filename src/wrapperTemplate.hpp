/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef WRAPPERTEMPLATE_HPP
#define WRAPPERTEMPLATE_HPP

#include "vizkit3d_taste.h"
#include "VizkitInstance.hpp"

// Template for update function: returns VIZTASTE_XXX
// Usage:
//     return updatePluginData<PLUGIN_CONTROLLER_CLASS>(pluginName, ASN1_DATA, TYPE_fromAsn1);
// Where:
//     - PLUGIN_CONTROLLER_CLASS: subclass of PluginController (e.g. RigidBodyStatePluginController)
//     - ASN1_DATA: value of C type generated from ASN.1 to convert and pass to the plugin's updateData method (e.g. state, of type const asn1_RigidBodyState*)
//     - TYPE_fromAsn1: type conversion function from asn1_types_support (e.g. RigidBodyState_fromAsn1)
//
template<typename PLUGIN_T, typename ASN1_DATA_T, typename ROCK_DATA_T>
int updatePluginData(const char* pluginName, const char* pluginType, const ASN1_DATA_T* data, void convertAsn1ToRock(ROCK_DATA_T&, const ASN1_DATA_T&))
{
    PLUGIN_T* plugin = NULL;
    
    try
    {
        auto& vi = VizkitInstance::getInstance();
        
        if (vi.isRunning())
        {        
            plugin = dynamic_cast<PLUGIN_T*>(vi.getPlugin(pluginName));

            if (NULL != plugin)
            {
                ROCK_DATA_T rockData;
                convertAsn1ToRock(rockData, *data);
                plugin->updateData(rockData);
            }
            else
            {
                static bool notified = false;
                if (!notified)
                {
                    notified = true;
                    std::cerr << "Vizkit plugin " << pluginName << " not found" << std::endl;
                }
                return VIZTASTE_PLUGIN_NOT_FOUND;
            }
        }
        // else, ignore update
        
    }
    catch (const VizkitInstance::Terminated& e)
    {
        static bool notified = false;
        if (!notified)
        {
            notified = true;
            std::cerr << "Vizkit instance has been closed" << std::endl;
        }
        
        return VIZTASTE_TERMINATED;
    }
    catch (const VizkitInstance::InitFailed& e)
    {
        static bool notified = false;
        if (!notified)
        {
            notified = true;
            std::cerr << "Vizkit initialization has failed" << std::endl;
        }
        
        return VIZTASTE_INIT_FAILED;
    }
    catch (const std::exception& e)
    {
        // Check if plugin found but wrong type
        if (NULL != plugin && plugin->getType().compare(pluginType))
        {
            std::cerr << "Vizkit plugin " << pluginName << " is of type " << plugin->getType() 
                << ", expected " << pluginType << std::endl;
            return VIZTASTE_PLUGIN_WRONG_TYPE;
        }
        else
        {
            std::cerr << "Error updating Vizkit plugin " << pluginName << ": " << e.what() << std::endl;
            return VIZTASTE_PLUGIN_EXCEPTION;
        }
    }
    
    return VIZTASTE_OK;
}

#endif //WRAPPERTEMPLATE_HPP
