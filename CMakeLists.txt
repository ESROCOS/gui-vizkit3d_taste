# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


cmake_minimum_required(VERSION 3.3)

project(vizkit3d_taste)

include($ENV{ESROCOS_CMAKE})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

#install(DIRECTORY ${CMAKE_SOURCE_DIR}/asn1
#        DESTINATION ${CMAKE_INSTALL_PREFIX}/types/${CMAKE_PROJECT_NAME}/asn1)
