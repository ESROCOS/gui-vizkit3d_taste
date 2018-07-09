/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_depthmap.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-depthmap.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/depthMapPluginWrapper.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-samples-DepthMapConvert.hpp"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_depthmap_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_depthmap_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_DepthMap block initialization error (code %d)\n", result);
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_depthmap_PI_updateDepthMap(const asn1SccBase_samples_DepthMap *IN_map)
{
    int result;
    
    if (g_statusOk)
    {
        base::samples::DepthMap map;
        asn1SccBase_samples_DepthMap_fromAsn1(map, *IN_map);
        result = DepthMapVisualization_updateDepthMap(vizkit3d_depthmap_ctxt.id, map);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_DepthMap block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_DepthMap block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

void vizkit3d_depthmap_PI_updatePose(const asn1SccBase_samples_RigidBodyState *IN_pose)
{
    int result;
    
    if (g_statusOk)
    {
        base::samples::RigidBodyState pose;
        asn1SccBase_samples_RigidBodyState_fromAsn1(pose, *IN_pose);
        result = DepthMapVisualization_updatePose(vizkit3d_depthmap_ctxt.id, pose);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_DepthMap block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_DepthMap block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

