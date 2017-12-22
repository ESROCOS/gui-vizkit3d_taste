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
 * Implementation of the vizkit initialization function.
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#include "vizkit3d_c.h"
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
