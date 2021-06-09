VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h \
                  ../../dataview/C/Context-vizkit3d-laserscan.h \
                  ../../dataview/C/Context-vizkit3d-laserscan.c \
                  src/vizkit3d_laserscan.h \
                  src/vizkit3d_laserscan.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
