VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h src/test_trajectory.h src/test_trajectory.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
