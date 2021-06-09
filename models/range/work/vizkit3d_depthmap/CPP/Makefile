VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-depthmap.h \
                  ../../dataview/C/Context-vizkit3d-depthmap.c \
                  src/vizkit3d_depthmap.h \
                  src/vizkit3d_depthmap.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
