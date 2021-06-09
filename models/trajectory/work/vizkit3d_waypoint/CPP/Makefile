VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-waypoint.h \
                  ../../dataview/C/Context-vizkit3d-waypoint.c \
                  src/vizkit3d_waypoint.h \
                  src/vizkit3d_waypoint.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
