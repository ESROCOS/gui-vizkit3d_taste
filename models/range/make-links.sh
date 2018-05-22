#!/bin/sh

# Run the script from the build folder.
#
# Makes symbolic links to the configuration and data files of the 
# tests so that they can be launched from the build folder.

ln -fs $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-range.yml config-range.yml
ln -fs $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/sonar_beam.data sonar_beam.data
ln -fs $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/sargon.png sargon.png
