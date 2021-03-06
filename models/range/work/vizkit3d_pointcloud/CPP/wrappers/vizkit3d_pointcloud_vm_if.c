/* Body file for function vizkit3d_Pointcloud
 * Generated by TASTE on 2021-06-09 12:03:09
 * Provided interfaces : updatePointCloud
 * Required interfaces : 
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = enabled
 *   |_ Taste::coordinates = 1001 212 1391 371
 * Timers              : 
 */
#include "vizkit3d_pointcloud_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
#endif




unsigned vizkit3d_pointcloud_initialized = 0;
void init_vizkit3d_pointcloud(void)
{
   if (!vizkit3d_pointcloud_initialized) {
      vizkit3d_pointcloud_initialized = 1;
      // Call user code startup function
      vizkit3d_pointcloud_startup();
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function vizkit3d_Pointcloud");
#endif
      vizkit3d_pointcloud_initialized = 2;
   }
}
void vizkit3d_pointcloud_updatePointCloud
      (const char *IN_cloud, size_t IN_cloud_len)

{

   static asn1SccBase_samples_Pointcloud IN_CLOUD;
#ifdef __unix__
   asn1SccBase_samples_Pointcloud_Initialize(&IN_CLOUD);
#endif
   if (0 != Decode_NATIVE_Base_samples_Pointcloud (&IN_CLOUD, (void *)IN_cloud, IN_cloud_len)) {
      #ifdef __unix__
         puts("Error decoding Base-samples-Pointcloud in function vizkit3d_Pointcloud_updatePointCloud");
      #endif
      return;
   }

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void vizkit3d_pointcloud_PI_updatePointCloud
      (const asn1SccBase_samples_Pointcloud *);




   // Call user code
   vizkit3d_pointcloud_PI_updatePointCloud (&IN_CLOUD);

}

