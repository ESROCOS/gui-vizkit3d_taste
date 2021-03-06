/* Body file for function test_Robot
 * Generated by TASTE on 2021-06-09 11:02:39
 * You can edit this file, it will not be overwritten
 * Provided interfaces : trigger
 * Required interfaces : updateJoints, updateRigidBodyState
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = enabled
 *   |_ Taste::coordinates = 524 430 956 650
 * Timers              : 
 */
#include <stdlib.h>
#ifdef __unix__
   #include <stdio.h>
   #include "PrintTypesAsASN1.h"
   #include "timeInMS.h"
#endif
#include "C_ASN1_Types.h"
#include "dataview-uniq.h"

// reference to flag preventing calls to RIs during the startup transition
extern unsigned test_robot_initialized;
// in case that happens, use system's abort function to crash the application
extern void abort (void);

void test_robot_RI_updateJoints
      (const asn1SccBase_commands_Joints *IN_joints)

{
   // Check that we are not in the startup transition
   if (2 != test_robot_initialized) {
      #ifdef __unix__
         puts("A call to test_robot_RI_updateJoints was made during system startup.");
         puts("This is not allowed because the system is not yet fully initialized. Please fix your code/models");
      #endif
      // crash the application
      abort();
   }

   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         PrintASN1Base_commands_Joints ("INNERDATA: updatejoints::Base_commands_Joints::joints", IN_joints);
         puts(""); // add newline
         // Log message to vizkit3d_Robot (corresponding PI: updateJoints)
         printf ("INNER: test_robot,vizkit3d_robot,updatejoints,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif
   // Encode parameter joints
   static asn1SccBase_commands_Joints IN_buf_joints;
   int size_IN_buf_joints =
      Encode_NATIVE_Base_commands_Joints
        ((void *)&IN_buf_joints,
          sizeof(asn1SccBase_commands_Joints),
          (asn1SccBase_commands_Joints *)IN_joints);
   if (-1 == size_IN_buf_joints) {
      #ifdef __unix__
         puts ("[ERROR] ASN.1 Encoding failed in test_robot_RI_updateJoints, parameter joints");
      #endif
        /* Crash the application due to message loss */
        abort();
   }


   // Call Middleware interface
   extern void vm_test_robot_updatejoints
     (void *, size_t);

   vm_test_robot_updatejoints
     ((void *)&IN_buf_joints, (size_t)size_IN_buf_joints);


}void test_robot_RI_updateRigidBodyState
      (const asn1SccBase_samples_RigidBodyState *IN_rbs)

{
   // Check that we are not in the startup transition
   if (2 != test_robot_initialized) {
      #ifdef __unix__
         puts("A call to test_robot_RI_updateRigidBodyState was made during system startup.");
         puts("This is not allowed because the system is not yet fully initialized. Please fix your code/models");
      #endif
      // crash the application
      abort();
   }

   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         PrintASN1Base_samples_RigidBodyState ("INNERDATA: updaterigidbodystate::Base_samples_RigidBodyState::rbs", IN_rbs);
         puts(""); // add newline
         // Log message to vizkit3d_Robot (corresponding PI: updateRigidBodyState)
         printf ("INNER: test_robot,vizkit3d_robot,updaterigidbodystate,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif
   // Encode parameter rbs
   static asn1SccBase_samples_RigidBodyState IN_buf_rbs;
   int size_IN_buf_rbs =
      Encode_NATIVE_Base_samples_RigidBodyState
        ((void *)&IN_buf_rbs,
          sizeof(asn1SccBase_samples_RigidBodyState),
          (asn1SccBase_samples_RigidBodyState *)IN_rbs);
   if (-1 == size_IN_buf_rbs) {
      #ifdef __unix__
         puts ("[ERROR] ASN.1 Encoding failed in test_robot_RI_updateRigidBodyState, parameter rbs");
      #endif
        /* Crash the application due to message loss */
        abort();
   }


   // Call Middleware interface
   extern void vm_test_robot_updaterigidbodystate
     (void *, size_t);

   vm_test_robot_updaterigidbodystate
     ((void *)&IN_buf_rbs, (size_t)size_IN_buf_rbs);


}

