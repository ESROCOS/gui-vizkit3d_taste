VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-rigidbodystate.h \
                  ../../dataview/C/Context-vizkit3d-rigidbodystate.c \
                  src/vizkit3d_rigidbodystate.h \
                  src/vizkit3d_rigidbodystate.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
