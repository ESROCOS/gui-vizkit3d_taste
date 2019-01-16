/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_motioncommand.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-motioncommand.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/motionCommandPluginWrapper.hpp"
#include "base_support/Base-PoseConvert.hpp"
#include "base_support/Base-commands-Motion2DConvert.hpp"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_motioncommand_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_motioncommand_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_MotionCommand block initialization error (code %d)\n", result);
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_motioncommand_PI_updateMotionCommand(const asn1SccBase_commands_Motion2D *IN_command)
{
    int result;
    
    if (g_statusOk)
    {
        base::commands::Motion2D command;
        asn1SccBase_commands_Motion2D_fromAsn1(command, *IN_command);
        result = MotionCommandVisualization_updateMotionCommand(vizkit3d_motioncommand_ctxt.id, command);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_MotionCommand block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_MotionCommand block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

void vizkit3d_motioncommand_PI_updatePose(const asn1SccBase_Pose *IN_pose)
{
    int result;
    
    if (g_statusOk)
    {
        base::Pose pose;
        asn1SccBase_Pose_fromAsn1(pose, *IN_pose);
        result = MotionCommandVisualization_updatePose(vizkit3d_motioncommand_ctxt.id, pose);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_MotionCommand block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_MotionCommand block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

