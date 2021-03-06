/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/* User code: This file will not be overwritten by TASTE. */

#include "vizkit3d_robot.h"

/* Function static data is declared in this file : */
#include "Context-vizkit3d-robot.h"

#include "vizkit3d_taste/vizkit3d_taste.hpp"
#include "vizkit3d_taste/robotPluginWrapper.hpp"
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/Base-commands-JointsConvert.hpp"
#include <stdio.h>

int g_statusOk = 0; // flag to avoid calling vizkit3d if instance not initialized or failed

void vizkit3d_robot_startup()
{
    int result;
    
    // Initialize Vizkit with the configuration file defined as context parameter
    // - only the first function to call this does actually initialize vizkit3d
    // - only one configuration file can be set per vizkit3d instance
    result = initializeVizkitOnce(vizkit3d_robot_ctxt.configfile);

    if (VIZTASTE_OK != result)
    {
        fprintf(stderr, "vizkit3d_Robot block initialization error (code %d)\n", result);
        g_statusOk = 0;
    }
    else
    {
        g_statusOk = 1;
    }
}

void vizkit3d_robot_PI_updateRigidBodyState(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
    int result;
    
    if (g_statusOk)
    {
        base::samples::RigidBodyState rbs;
        asn1SccBase_samples_RigidBodyState_fromAsn1(rbs, *IN_rbs);
        result = RobotVisualization_updateRigidBodyState(vizkit3d_robot_ctxt.id, rbs);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_Robot block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_Robot block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

void vizkit3d_robot_PI_updateJoints(const asn1SccBase_commands_Joints *IN_joints)
{
    int result;
    
    if (g_statusOk)
    {
        base::samples::Joints joints;
        asn1SccBase_commands_Joints_fromAsn1(joints, *IN_joints);
        result = RobotVisualization_updateJoints(vizkit3d_robot_ctxt.id, joints);
        
        if (VIZTASTE_TERMINATED == result)
        {
            fprintf(stderr, "vizkit3d_Robot block terminated - stopping update\n");
            g_statusOk = 0;
        }
        else if (VIZTASTE_OK != result)
        {
            fprintf(stderr, "vizkit3d_Robot block error (code %d) - stopping update\n", result);
            g_statusOk = 0;
        }
    }
}

