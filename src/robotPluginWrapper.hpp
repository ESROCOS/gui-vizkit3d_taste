/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef ROBOTPLUGINWRAPPER_HPP
#define ROBOTPLUGINWRAPPER_HPP

#include <base/samples/Joints.hpp>
#include <base/samples/RigidBodyState.hpp>

// Update functions: returns VIZTASTE_XXX
int RobotVisualization_updateJoints(const char* pluginName, const base::samples::Joints& joints);
int RobotVisualization_updateRigidBodyState(const char* pluginName, const base::samples::RigidBodyState& state);

#endif //ROBOTPLUGINWRAPPER_HPP
