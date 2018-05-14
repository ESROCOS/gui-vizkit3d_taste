# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


cmake_minimum_required(VERSION 3.3)

project(vizkit3d_taste)

include($ENV{ESROCOS_CMAKE})

esrocos_init()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# codecov module
find_package(codecov REQUIRED)
if (NOT ENABLE_COVERAGE)
	message(STATUS "Configure with -DENABLE_COVERAGE=On to collect coverage metrics")
endif()

add_subdirectory(src)
add_subdirectory(test)
