VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-motioncommand.h \
                  ../../dataview/C/Context-vizkit3d-motioncommand.c \
                  src/vizkit3d_motioncommand.h \
                  src/vizkit3d_motioncommand.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
