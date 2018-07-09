/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef VIZKIT_TASTE_HPP
#define VIZKIT_TASTE_HPP

// vizkit3d_c return codes
#define VIZTASTE_OK 0
#define VIZTASTE_INIT_FAILED 1
#define VIZTASTE_TERMINATED 2
#define VIZTASTE_PLUGIN_NOT_FOUND 3
#define VIZTASTE_PLUGIN_WRONG_TYPE 4
#define VIZTASTE_PLUGIN_EXCEPTION 5

// Initialize Vizkit: only the first call by any thread takes effect
int initializeVizkitOnce(const char* configFile);

#endif //VIZKIT_TASTE_HPP
