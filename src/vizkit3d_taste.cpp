/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "vizkit3d_taste.h"
#include "VizkitInstance.hpp"
#include <iostream>

int initializeVizkitOnce(const char* configFile)
{
    try
    {
        VizkitInstance::getInstance().initializeOnce(configFile);
    }
    catch (const std::exception& e)
    {
        std::cerr << "vizit-taste: error loading configuration file " << configFile
            << ": " << e.what() << std::endl;
        
        return VIZTASTE_INIT_FAILED;
    }

    return VIZTASTE_OK;
}
