# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

find_package(Qt4 4.4 REQUIRED QtCore QtGui)
find_package(Threads REQUIRED)


# Find libraries in ESROCOS' install directory
link_directories(
    ${CMAKE_INSTALL_PREFIX}/lib
    ${CMAKE_INSTALL_PREFIX}/lib/orocos/types
)

# ASN.1 types are imported and compiled locally to the project, but not installed
esrocos_asn1_types_package(local_asn1
    OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/asn1
    IMPORT types/base
)

# Test 1
add_executable(test-bodystate 
    test-bodystate.cpp
    ${local_asn1_C_SOURCES}
)
esrocos_pkgconfig_dependency(test-bodystate
    eigen3
    vizkit3d
    vizkit3d-viz
    base-types
    base-viz
    robot_model-viz
    base-typekit-gnulinux
    base_support 
)
target_include_directories(test-bodystate 
    PRIVATE ${CMAKE_INSTALL_PREFIX}/include/orocos
    PRIVATE ${CMAKE_SOURCE_DIR}/src
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries(test-bodystate 
    PRIVATE vizkit3d_taste
    PRIVATE ${CMAKE_THREAD_LIBS_INIT}
)
target_compile_definitions(test-bodystate PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(test-bodystate vizkit3d_taste local_asn1_generate_c)

# Test 2
add_executable(test-range
    test-range.cpp
    ${local_asn1_C_SOURCES}
)
esrocos_pkgconfig_dependency(test-range
    eigen3
    vizkit3d
    vizkit3d-viz
    base-types
    base-viz
    robot_model-viz
    base-typekit-gnulinux
    base_support 
)
target_include_directories(test-range 
    PRIVATE ${CMAKE_INSTALL_PREFIX}/include/orocos
    PRIVATE ${CMAKE_SOURCE_DIR}/src
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries(test-range 
    PRIVATE vizkit3d_taste
    PRIVATE ${CMAKE_THREAD_LIBS_INIT}
)
target_compile_definitions(test-range PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(test-range vizkit3d_taste local_asn1_generate_c)

# Test 3
add_executable(test-robot
    test-robot.cpp
    ${local_asn1_C_SOURCES}
)
esrocos_pkgconfig_dependency(test-robot
    eigen3
    vizkit3d
    vizkit3d-viz
    base-types
    base-viz
    robot_model-viz
    base-typekit-gnulinux
    base_support 
)
target_include_directories(test-robot 
    PRIVATE ${CMAKE_INSTALL_PREFIX}/include/orocos
    PRIVATE ${CMAKE_SOURCE_DIR}/src
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries(test-robot 
    PRIVATE vizkit3d_taste
    PRIVATE ${CMAKE_THREAD_LIBS_INIT}
)
target_compile_definitions(test-robot PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(test-robot vizkit3d_taste local_asn1_generate_c)

# Test 4
add_executable(test-trajectory
    test-trajectory.cpp
    ${local_asn1_C_SOURCES}
)
esrocos_pkgconfig_dependency(test-trajectory
    eigen3
    vizkit3d
    vizkit3d-viz
    base-types
    base-viz
    robot_model-viz
    base-typekit-gnulinux
    base_support 
)
target_include_directories(test-trajectory 
    PRIVATE ${CMAKE_INSTALL_PREFIX}/include/orocos
    PRIVATE ${CMAKE_SOURCE_DIR}/src
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries(test-trajectory 
    PRIVATE vizkit3d_taste
    PRIVATE ${CMAKE_THREAD_LIBS_INIT}
)
target_compile_definitions(test-trajectory PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(test-trajectory vizkit3d_taste local_asn1_generate_c)

