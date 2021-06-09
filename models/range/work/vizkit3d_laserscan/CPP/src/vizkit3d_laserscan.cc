/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_laserscan.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-laserscan.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/laserScanPluginWrapper.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-samples-LaserScanConvert.hpp"
#include <stdio.h>

int g_statusOk_ls = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_laserscan_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_laserscan_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_LaserScan block initialization error (code %d)\n", result);
        g_statusOk_ls = 0;
    }
    else
    {
        g_statusOk_ls = 1;
    }
}

void vizkit3d_laserscan_PI_updateLaserScan(const asn1SccBase_samples_LaserScan *IN_scan)
{
    int result;
    
    if (g_statusOk_ls)
    {
        base::samples::LaserScan scan;
        asn1SccBase_samples_LaserScan_fromAsn1(scan, *IN_scan);
        result = LaserScanVisualization_updateLaserScan(vizkit3d_laserscan_ctxt.id, scan);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_LaserScan block terminated - stopping update\n");
            g_statusOk_ls = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_LaserScan block error (code %d) - stopping update\n", result);
            g_statusOk_ls = 0;
        }
    }
}

void vizkit3d_laserscan_PI_updatePose(const asn1SccBase_samples_RigidBodyState *IN_pose)
{
    int result;
    
    if (g_statusOk_ls)
    {
        base::samples::RigidBodyState pose;
        asn1SccBase_samples_RigidBodyState_fromAsn1(pose, *IN_pose);
        result = LaserScanVisualization_updatePose(vizkit3d_laserscan_ctxt.id, pose);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_LaserScan block terminated - stopping update\n");
            g_statusOk_ls = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_LaserScan block error (code %d) - stopping update\n", result);
            g_statusOk_ls = 0;
        }
    }
}

