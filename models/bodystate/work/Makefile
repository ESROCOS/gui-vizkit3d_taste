# MAKEFILE_PATH   := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKEFILE_PATH   := $(lastword $(MAKEFILE_LIST))
OUTDIR          := $(dir $(MAKEFILE_PATH))
ASN1_FILES      := /home/peraspera/esrocos_workspace/install/types/base/base.asn /home/peraspera/esrocos_workspace/install/types/base/taste-extended.asn /home/peraspera/esrocos_workspace/install/types/base/userdefs-base.asn /home/peraspera/esrocos_workspace/install/types/vizkit3d/vizkit3d.asn /home/peraspera/tool-inst/share/taste-types/taste-types.asn
CP_FILES        := ../work/vizkit3d_bodystate/CPP/Context-vizkit3d-bodystate.asn ../work/vizkit3d_rigidbodystate/CPP/Context-vizkit3d-rigidbodystate.asn      # Context parameters
DATAVIEW_PATH   := ${OUTDIR}/dataview
DATAVIEW_UNIQ   := ${DATAVIEW_PATH}/dataview-uniq.asn
DATAVIEW_ACN    :=
DATAVIEW_AADLV1 := ${DATAVIEW_PATH}/dataview_aadlv1.aadl
DATAVIEW_AADLV2 := ${DATAVIEW_PATH}/dataview_aadlv2.aadl

# Project cache folder is used to speed up all ASN.1-related processing
export PROJECT_CACHE=${HOME}/.taste_AST_cache

all:	build-default

# Build a simulator of the system
simu:	aadl2glueC build/system_config.h ${DATAVIEW_PATH}/built build/deploymentview_final/Makefile
	$(MAKE) -j -C build -f Makefile.taste simu


# Generate the language-specific data view needed before editing user code
dataview:	dataview/C/built

# Generate the complete dataview, including Python bindings if there is a GUI
${DATAVIEW_PATH}/built:	dataview
	touch $@

# Build based on the deployment view
build-default:	aadl2glueC build/system_config.h ${DATAVIEW_PATH}/built build/deploymentview_final/Makefile
	$(MAKE) -j -C build -f Makefile.taste

# Force build with RTEMS/Leon, even if deployment view does not specify it
build-rtems-ada:	aadl2glueC build/system_config.h ${DATAVIEW_PATH}/built build/deploymentview_final/Makefile
	$(MAKE) -j -C build -f Makefile.taste rtems_ada

# Force build with AIR (TSP), even if deployment view does not specify it
air:	aadl2glueC build/system_config.h ${DATAVIEW_PATH}/built build/deploymentview_final/Makefile
	$(MAKE) -j -C build -f Makefile.taste air

# Rule to invoke Ocarina (generation of POHI middleware code)
build/deploymentview_final/Makefile:	build/main.aadl ${DATAVIEW_AADLV2} ../ConcurrencyView_Properties.aadl
	cd build ; ocarina -x main.aadl

# Optionally hold thread priorities, offset, stack size. Create if not present
../ConcurrencyView_Properties.aadl:
	touch $@

# Optionally manage SQL Database (run taste-create-database to enable)
sql_db/DV.py:
	mkdir -p sql_db && touch $@

# Create dataview-uniq.asn by concatenating all asn1 input files
${DATAVIEW_UNIQ}:	${ASN1_FILES}
	mkdir -p ${PROJECT_CACHE} && mkdir -p ${DATAVIEW_PATH}
	sed -e '$$s/$$/\n/' -s $^ > $@


# system_config.h is used to filter out non-needed ASN.1 encoder/decoders
build/system_config.h:	$(wildcard */*/wrappers/*_system_config.h)
	cat $^ > $@

#  Call DMT/aadl2glueC to generate glue code from the mini-cv.aadl files
aadl2glueC:	test_bodystate/CPP/wrappers/aadl2glueC_built vizkit3d_bodystate/CPP/wrappers/aadl2glueC_built vizkit3d_rigidbodystate/CPP/wrappers/aadl2glueC_built

# Build dataview.aadl in AADLv1 format, used by DMT to generate glue code
${DATAVIEW_AADLV1}: ${DATAVIEW_UNIQ}
	asn2aadlPlus  $< $@

# Build dataview.aadl in AADLv2 format, used by Ocarina to generate glue code
${DATAVIEW_AADLV2}: ${DATAVIEW_UNIQ}
	asn2aadlPlus --aadlv2  $< $@

test_bodystate/CPP/wrappers/aadl2glueC_built: test_bodystate/CPP/wrappers/test_bodystate_mini_cv.aadl ${DATAVIEW_AADLV1}
	aadl2glueC -o $(dir $@) $^
	touch $@

vizkit3d_bodystate/CPP/wrappers/aadl2glueC_built: vizkit3d_bodystate/CPP/wrappers/vizkit3d_bodystate_mini_cv.aadl ${DATAVIEW_AADLV1}
	aadl2glueC -o $(dir $@) $^
	touch $@

vizkit3d_rigidbodystate/CPP/wrappers/aadl2glueC_built: vizkit3d_rigidbodystate/CPP/wrappers/vizkit3d_rigidbodystate_mini_cv.aadl ${DATAVIEW_AADLV1}
	aadl2glueC -o $(dir $@) $^
	touch $@


# Compile the ASN.1 models in C
dataview/C/built: ${DATAVIEW_UNIQ} ${DATAVIEW_ACN} ${CP_FILES}
	mkdir -p $(dir $@)
	# asn2dataModel does not take the ACN files, and only calls asn1.exe
	# asn2dataModel -o $(dir $@) -toC ${DATAVIEW_UNIQ} ${DATAVIEW_ACN}
	mono $(shell which asn1.exe) -typePrefix asn1Scc -equal -fp AUTO -o $(dir $@) -c -uPER -ACN $^
	cp $(shell taste-config --prefix)/share/AutoGUI/debug_messages.? dataview/C
	cp $(shell taste-config --prefix)/share/AutoGUI/timeInMS.? dataview/C
	cd dataview/C && msgPrinter ../dataview-uniq.asn
	cd dataview/C && msgPrinterASN1  ../dataview-uniq.asn
	touch $@



function-types-linux:

function-instances-linux:	function-types-linux
	$(MAKE) -C test_bodystate/CPP -j compile-linux
	$(MAKE) -C vizkit3d_bodystate/CPP -j compile-linux
	$(MAKE) -C vizkit3d_rigidbodystate/CPP -j compile-linux

compile-all-linux:	dataviews function-instances-linux

clean:
	rm -rf binaries dataview
	$(MAKE) -C build -f Makefile.taste clean

.PHONY: clean simu compile-all-linux function-instances-linux function-types-linux build-default dataview build-rtems-ada dataview
