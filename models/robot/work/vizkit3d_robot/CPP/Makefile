VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-robot.h \
                  ../../dataview/C/Context-vizkit3d-robot.c \
                  src/vizkit3d_robot.h \
                  src/vizkit3d_robot.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
