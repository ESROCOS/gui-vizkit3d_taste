KAZOO?=kazoo
# Here you can specify folders containing external code you want to
# compile and link for a specific partition.
# Use upper case for the partition name:
# export <PARTITION_NAME>_EXTERNAL_SOURCE_PATH=/absolute/path/1:/....
#EIGEN3_INC := `pkg-config --cflags eigen3 | sed "s/-I//"`


export X86_PARTITION_EXTERNAL_SOURCE_PATH = $(AUTOPROJ_CURRENT_ROOT)/install/include:$(AUTOPROJ_CURRENT_ROOT)/install/include/orocos:/usr/local/include/eigen3

export X86_PARTITION_USER_LDFLAGS = -L$(AUTOPROJ_CURRENT_ROOT)/install/lib \
	-lvizkit3d_taste \
	-lbase_support \
	-lbase-types \
	-L$(AUTOPROJ_CURRENT_ROOT)/install/lib/orocos/types/ \
	-lbase-typekit-gnulinux
 
export X86_PARTITION_USER_CFLAGS = -DOROCOS_TARGET=gnulinux

all:	c

c:	work/glue_built
	$(MAKE) -C work

skeletons:
	$(MAKE) work/skeletons_built

work/skeletons_built:	InterfaceView.aadl DataView.aadl
	$(KAZOO) --gw -o work
	$(MAKE) -C work dataview
	touch $@

work/glue_built:	InterfaceView.aadl DeploymentView.aadl DataView.aadl
	$(KAZOO) -p --glue --gw -o work
	touch $@

clean:
	rm -rf work/build
	rm -f work/glue_built work/skeletons_built
	find work -type d -name "wrappers" -exec rm -rf {} +
	find work -type d -name "*_GUI" -exec rm -rf {} +

.PHONY: clean skeletons c

