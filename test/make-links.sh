#!/bin/sh

# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

# Run the script from the build folder.
#
# Makes symbolic links to the configuration and data files of the 
# tests so that they can be launched from the build folder.

ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-bodystate.yml config-bodystate.yml
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-range.yml config-range.yml
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-trajectory.yml config-trajectory.yml
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-robot.yml config-robot.yml
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/stim300.stl stim300.stl
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/sargon.png sargon.png
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/sonar_beam.data sonar_beam.data
ln -s $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/spacebot_arm spacebot_arm
