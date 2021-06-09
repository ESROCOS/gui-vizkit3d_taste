VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-trajectory.h \
                  ../../dataview/C/Context-vizkit3d-trajectory.c \
                  src/vizkit3d_trajectory.h \
                  src/vizkit3d_trajectory.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
