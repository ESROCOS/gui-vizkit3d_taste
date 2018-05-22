/* User code: This file will not be overwritten by TASTE. */

#include "test_trajectory.h"

#include "vizkit3d_taste/vizkit3d_taste.h"
#include "vizkit3d_taste/typeConversions.hpp"
#include <cmath>
#include <iostream>

// Globals
int i = 0;
asn1_Vector3d tv;
asn1_Waypoint wp;
asn1_Motion2D cmd;
asn1_Pose pose;


void test_trajectory_startup()
{
    // Trajectory vector
    base::Vector3d tvAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(tv, tvAux);

    // Waypoint
    base::Vector3d wpAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(wp.position, wpAux);
    wp.heading = M_PI / 3.0;
    wp.tol_position = 0.0;
    wp.tol_heading = 0.0;

    // Motion command and pose
    cmd.translation = 0.1;
    cmd.rotation = 0.0;
    
    base::Vector3d posAux(0.0, 0.0, 0.0);
    Vector3d_toAsn1(pose.position, posAux);
    base::AngleAxisd aa(M_PI/3.0, base::Vector3d::UnitZ());
    base::Quaterniond oriAux(aa);
    Quaterniond_toAsn1(pose.orientation, oriAux);
}

void test_trajectory_PI_trigger()
{
    // Trajectory
    tv.data.arr[0] = i/100.0;
    tv.data.arr[1] = i/50.0;
    test_trajectory_RI_updateTrajectory(&tv);
    
    // Waypoint
    if (0 == i % 100)
    {
        wp.position.data.arr[0] = (i+100)/100.0;
        wp.position.data.arr[1] = (i+100)/50.0;
        test_trajectory_RI_updateWaypoint(&wp);
    }
    
    // Motion command
    if (0 == i % 100)
    {
        pose.position.data.arr[0] = i/100.0;
        pose.position.data.arr[1] = i/50.0;
        test_trajectory_RI_updateMotionCommand(&cmd);
        test_trajectory_RI_updatePose(&pose);
    }
    
    i++;
}
