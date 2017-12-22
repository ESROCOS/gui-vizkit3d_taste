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
 * ---------------------------------------------------------------------
 * Main header for the vizkit3d_c library, containing the vizkit
 * initialization function and constant definitions (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef VIZKIT_TASTE_H
#define VIZKIT_TASTE_H

#ifdef __cplusplus
extern "C"
{
#endif

// vizkit3d_c return codes
#define VIZTASTE_OK 0
#define VIZTASTE_INIT_FAILED 1
#define VIZTASTE_TERMINATED 2
#define VIZTASTE_PLUGIN_NOT_FOUND 3
#define VIZTASTE_PLUGIN_WRONG_TYPE 4
#define VIZTASTE_PLUGIN_EXCEPTION 5

// Initialize Vizkit: only the first call by any thread takes effect
int initializeVizkitOnce(const char* configFile);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //VIZKIT_TASTE_H
