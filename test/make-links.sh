#!/bin/sh

# Run the script from the build folder.
#
# Makes symbolic links to the configuration and data files of the 
# tests so that they can be launched from the build folder.

ln -s ../test/config-bodystate.yml config-bodystate.yml
ln -s ../test/config-range.yml config-range.yml
ln -s ../test/config-trajectory.yml config-trajectory.yml
ln -s ../test/config-robot.yml config-robot.yml
ln -s ../test/stim300.stl stim300.stl
ln -s ../test/sargon.png sargon.png
ln -s ../test/sonar_beam.data sonar_beam.data
ln -s ../test/spacebot_arm spacebot_arm
