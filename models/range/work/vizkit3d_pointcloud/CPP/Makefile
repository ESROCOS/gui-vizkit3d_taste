VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-pointcloud.h \
                  ../../dataview/C/Context-vizkit3d-pointcloud.c \
                  src/vizkit3d_pointcloud.h \
                  src/vizkit3d_pointcloud.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
