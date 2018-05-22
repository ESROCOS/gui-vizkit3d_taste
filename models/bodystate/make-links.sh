#!/bin/sh

# Run the script from the build folder.
#
# Makes symbolic links to the configuration and data files of the 
# tests so that they can be launched from the build folder.

ln -fs $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/config-bodystate.yml config-bodystate.yml
ln -fs $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test/stim300.stl stim300.stl
