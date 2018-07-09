#!/bin/sh

./update_data_view.sh
#FORCE=1 taste-generate-skeletons

ORCHESTRATOR_OPTIONS+=" --no-retry"
ORCHESTRATOR_OPTIONS+=`pkg-config --cflags eigen3 | sed "s/-I/ -e x86_partition:/g" `
ORCHESTRATOR_OPTIONS+=" -e x86_partition:$AUTOPROJ_CURRENT_ROOT/install/include"
ORCHESTRATOR_OPTIONS+=" -e x86_partition:$AUTOPROJ_CURRENT_ROOT/install/include/orocos"
ORCHESTRATOR_OPTIONS+=" -l x86_partition:$AUTOPROJ_CURRENT_ROOT/install/lib/libvizkit3d_taste.so"
ORCHESTRATOR_OPTIONS+=" -l x86_partition:$AUTOPROJ_CURRENT_ROOT/install/lib/libbase_support.so"
ORCHESTRATOR_OPTIONS+=" -l x86_partition:$AUTOPROJ_CURRENT_ROOT/install/lib/libbase-types.so"
ORCHESTRATOR_OPTIONS+=" -l x86_partition:$AUTOPROJ_CURRENT_ROOT/install/lib/orocos/types/libbase-typekit-gnulinux.so"

echo "ORCHESTRATOR_OPTIONS=$ORCHESTRATOR_OPTIONS"
