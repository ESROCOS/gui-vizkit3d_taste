# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

# Install libvizkit3d_taste.so library and headers so that it can be used by the build of the ASN.1 models
esrocos_preinstall_files(vizkit3d_lib lib ${CMAKE_BINARY_DIR}/src/libvizkit3d_taste.so)
file(GLOB LIB_HEADERS ${CMAKE_SOURCE_DIR}/src/*.h ${CMAKE_SOURCE_DIR}/src/*.hpp)
esrocos_preinstall_files(vizkit3d_headers include/vizkit3d_taste ${LIB_HEADERS})

add_subdirectory(types)
add_subdirectory(bodystate)
add_subdirectory(range)
add_subdirectory(robot)
add_subdirectory(trajectory)
