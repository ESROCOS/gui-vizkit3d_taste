/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* Functions to be filled by the user (never overwritten by buildsupport tool) */

#include "vizkit3d_rigidbodystate.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-rigidbodystate.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/rigidBodyStatePluginWrapper.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_rigidbodystate_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_rigidbodystate_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_RigidBodyState block initialization error (code %d)\n", result);
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_rigidbodystate_PI_updateRigidBodyState(const asn1SccBase_samples_RigidBodyState *IN_state)
{
    int result;
    base::samples::RigidBodyState rbs;
    
    if (g_statusOk)
    {
        asn1SccBase_samples_RigidBodyState_fromAsn1(rbs, *IN_state);
        result = RigidBodyStateVisualization_updateRigidBodyState(vizkit3d_rigidbodystate_ctxt.id, rbs);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_RigidBodyState block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_RigidBodyState block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

