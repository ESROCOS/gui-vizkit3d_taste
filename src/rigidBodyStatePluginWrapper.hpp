/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef RIGIDBODYSTATEPLUGINWRAPPER_HPP
#define RIGIDBODYSTATEPLUGINWRAPPER_HPP

#include <base/samples/RigidBodyState.hpp>

// Update function: returns VIZTASTE_XXX
int RigidBodyStateVisualization_updateRigidBodyState(const char* pluginName, const base::samples::RigidBodyState& state);

#endif //RIGIDBODYSTATEPLUGINWRAPPER_HPP
