/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_pointcloud.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-pointcloud.h"

#include "vizkit3d_taste/vizkit3d_taste.h"
#include "vizkit3d_taste/pointcloudPluginWrapper.h"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

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
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_pointcloud_PI_updatePointCloud(const asn1SccBase_samples_Pointcloud *IN_cloud)
{
    int result;
    
    if (g_statusOk)
    {
        result = PointcloudVisualization_updatePointCloud(vizkit3d_pointcloud_ctxt.id, IN_cloud);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_Pointcloud block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_Pointcloud block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

