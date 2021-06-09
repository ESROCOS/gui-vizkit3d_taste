VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-sonarbeam.h \
                  ../../dataview/C/Context-vizkit3d-sonarbeam.c \
                  src/vizkit3d_sonarbeam.h \
                  src/vizkit3d_sonarbeam.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
