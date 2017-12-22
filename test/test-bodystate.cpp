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
 *
 *..................................................................
 * main for test-bodystate, testing:
 * - BodyStateVisualization
 * - ModelVisualization
 *..................................................................
 * HISTORY
 * $History$
 *
 * ================================================================== */

#include "vizkit3d_c/vizkit3d_c.h"
#include "vizkit3d_c/bodyStatePluginWrapper.h"
#include "vizkit3d_c/rigidBodyStatePluginWrapper.h"
#include "asn1_types_support/asn1SccUtils.h"
#include <thread>
#include <cmath>
#include <iostream>
#include <unistd.h>

void update()
{
    asn1SccVector3d xAxis = Vector3d_create(1.0, 0.0, 0.0);

    // Body state
    asn1SccBodyState bs;
    bs.pose.translation = Vector3d_create(0.0, 0.0, 0.5);

    // Rigid body state
    asn1SccRigidBodyState rbs;

    for (int i = 0; ; ++i)
    {
        int result = VIZTASTE_OK;
        
        // Body state
        if (VIZTASTE_OK == result)
        {    
            bs.pose.orientation = Orientation_angleAxis(i*M_PI/180.0, &xAxis);
            result = BodyStateVisualization_updateBodyState("BS", &bs);
        }
        
        // Rigid body state
        if (VIZTASTE_OK == result)
        {    
            rbs.orient = Orientation_angleAxis(i*M_PI/180.0, &xAxis);
            result = RigidBodyStateVisualization_updateRigidBodyState("RBS", &rbs);
        }
        
        switch (result)
        {
            case VIZTASTE_TERMINATED:
                return;
            case VIZTASTE_INIT_FAILED:
                std::cerr << "VIZTASTE_INIT_FAILED" << std::endl;
                return;
            case VIZTASTE_PLUGIN_NOT_FOUND:
                std::cerr << "VIZTASTE_PLUGIN_NOT_FOUND" << std::endl;
                break;
            case VIZTASTE_PLUGIN_WRONG_TYPE:
                std::cerr << "VIZTASTE_PLUGIN_WRONG_TYPE" << std::endl;
                break;
            case VIZTASTE_PLUGIN_EXCEPTION:
                std::cerr << "VIZTASTE_PLUGIN_EXCEPTION" << std::endl;
                break;
        }

        usleep(5000);
    }
}

int main(int argc, char** argv)
{
    int result = initializeVizkitOnce("config-bodystate.yml");
    if (VIZTASTE_OK != result)
    {
        std::cerr << "vizkit3d_c initialization error" << std::endl;
        return 1;
    }

    std::thread t1(update);
    t1.join();

    return 0;
}
