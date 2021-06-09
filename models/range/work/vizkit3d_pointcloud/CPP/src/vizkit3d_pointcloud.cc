/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_pointcloud.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-pointcloud.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "base_support/OpaqueConversion.hpp"
#include "vizkit3d_taste/pointcloudPluginWrapper.hpp"
#include "base_support/Base-samples-PointcloudConvert.hpp"
#include <stdio.h>

int g_statusOk_pc = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_pointcloud_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_pointcloud_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_Pointcloud block initialization error (code %d)\n", result);
        g_statusOk_pc = 0;
    }
    else
    {
        g_statusOk_pc = 1;
    }
}

void vizkit3d_pointcloud_PI_updatePointCloud(const asn1SccBase_samples_Pointcloud *IN_cloud)
{
    int result;
    
    if (g_statusOk_pc)
    {
        base::samples::Pointcloud cloud;
        asn1SccBase_samples_Pointcloud_fromAsn1(cloud, *IN_cloud);
        result = PointcloudVisualization_updatePointCloud(vizkit3d_pointcloud_ctxt.id, cloud);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_Pointcloud block terminated - stopping update\n");
            g_statusOk_pc = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_Pointcloud block error (code %d) - stopping update\n", result);
            g_statusOk_pc = 0;
        }
    }
}

