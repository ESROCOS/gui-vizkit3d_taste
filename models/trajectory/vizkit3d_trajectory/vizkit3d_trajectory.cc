/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_trajectory.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-trajectory.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/trajectoryPluginWrapper.hpp"
#include "base_support/OpaqueConversion.hpp"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_trajectory_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_trajectory_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_Trajectory block initialization error (code %d)\n", result);
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_trajectory_PI_updateTrajectory(const asn1SccWrappers_Vector3d *IN_point)
{
    int result;
    
    if (g_statusOk)
    {
        base::Vector3d tr;
        asn1Scc_Vector3d_fromAsn1(tr, *IN_point);
        result = TrajectoryVisualization_updateTrajectory(vizkit3d_trajectory_ctxt.id, tr);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_Trajectory block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_Trajectory block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

