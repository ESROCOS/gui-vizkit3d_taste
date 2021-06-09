VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-bodystate.h \
                  ../../dataview/C/Context-vizkit3d-bodystate.c \
                  src/vizkit3d_bodystate.h \
                  src/vizkit3d_bodystate.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
