#!/bin/sh

# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

# Run the script from the build folder.
#
# Makes symbolic links to the configuration and data files of the 
# tests so that they can be launched from the build folder.

cd $AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/models

MODELS=("bodystate" "range"  "robot"  "trajectory" )
DIR_TEST=$AUTOPROJ_CURRENT_ROOT/gui/vizkit3d_taste/test

for m in "${MODELS[@]}"
do
	DIR_BINARIES=${AUTOPROJ_CURRENT_ROOT}/gui/vizkit3d_taste/models/${m}/work/binaries 
	if [ -d "$DIR_BINARIES" ]; then
		echo "Making simbolic links in binary folder for model ${m}"
		ln -s ${DIR_TEST}/config-bodystate.yml ${DIR_BINARIES}/config-bodystate.yml
		ln -s ${DIR_TEST}/config-range.yml ${DIR_BINARIES}/config-range.yml
		ln -s ${DIR_TEST}/config-trajectory.yml ${DIR_BINARIES}/config-trajectory.yml
		ln -s ${DIR_TEST}/config-robot.yml ${DIR_BINARIES}/config-robot.yml
		ln -s ${DIR_TEST}/stim300.stl ${DIR_BINARIES}/stim300.stl
		ln -s ${DIR_TEST}/sargon.png ${DIR_BINARIES}/sargon.png
		ln -s ${DIR_TEST}/sonar_beam.data ${DIR_BINARIES}/sonar_beam.data
		ln -s ${DIR_TEST}/spacebot_arm ${DIR_BINARIES}/spacebot_arm
	
	else
		echo "Error: ${DIR_BINARIES} not found. Please type:\n cd ${AUTOPROJ_CURRENT_ROOT}/gui/vizkit3d_taste/models/${m}; make"
	fi
done


