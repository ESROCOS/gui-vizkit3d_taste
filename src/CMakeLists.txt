# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

find_package(Qt4 4.4 REQUIRED QtCore QtGui)

set(SOURCES
    BodyStatePluginController.cpp
    ConfigurationReader.cpp
    DepthMapPluginController.cpp
    GridPluginController.cpp
    LaserScanPluginController.cpp
    ModelPluginController.cpp
    MotionCommandPluginController.cpp
    PluginController.cpp
    PointcloudPluginController.cpp
    RigidBodyStatePluginController.cpp
    RobotPluginController.cpp
    SonarBeamPluginController.cpp
    TextureBoxPluginController.cpp
    TrajectoryPluginController.cpp
    VizkitInstance.cpp
    WaypointPluginController.cpp
    bodyStatePluginWrapper.cpp
    depthMapPluginWrapper.cpp
    laserScanPluginWrapper.cpp
    motionCommandPluginWrapper.cpp
    pointcloudPluginWrapper.cpp
    rigidBodyStatePluginWrapper.cpp
    robotPluginWrapper.cpp
    sonarBeamPluginWrapper.cpp
    trajectoryPluginWrapper.cpp
    vizkit3d_taste.cpp
    waypointPluginWrapper.cpp
)
    
set(HEADERS
    BodyStatePluginController.hpp
    ConfigurationReader.hpp
    DepthMapPluginController.hpp
    GridPluginController.hpp
    LaserScanPluginController.hpp
    ModelPluginController.hpp
    MotionCommandPluginController.hpp
    PluginController.hpp
    PointcloudPluginController.hpp
    RigidBodyStatePluginController.hpp
    RobotPluginController.hpp
    SonarBeamPluginController.hpp
    TextureBoxPluginController.hpp
    TrajectoryPluginController.hpp
    VizkitInstance.hpp
    WaypointPluginController.hpp
    bodyStatePluginWrapper.h
    depthMapPluginWrapper.h
    laserScanPluginWrapper.h
    motionCommandPluginWrapper.h
    pointcloudPluginWrapper.h
    rigidBodyStatePluginWrapper.h
    robotPluginWrapper.h
    sonarBeamPluginWrapper.h
    trajectoryPluginWrapper.h
    vizkit3d_taste.h
    waypointPluginWrapper.h
    wrapperTemplate.hpp
)

# ASN.1 types are imported and compiled locally to the project, but not installed
esrocos_asn1_types_package(local_types
    OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/asn1
    IMPORT types/base
)

# Find libraries in ESROCOS' install directory
link_directories(
    ${CMAKE_INSTALL_PREFIX}/lib
    ${CMAKE_INSTALL_PREFIX}/lib/orocos/types
)

# Target library
add_library(vizkit3d_taste SHARED ${SOURCES})
esrocos_pkgconfig_dependency(vizkit3d_taste
    eigen3
    sdformat
    yaml-cpp
    vizkit3d
    vizkit3d-viz
    base-types
    base-viz
    robot_model-viz
    base-typekit-gnulinux
    base_support 
)
set_target_properties(vizkit3d_taste PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(vizkit3d_taste 
    PUBLIC ${QT_INCLUDES}
    PUBLIC ${CMAKE_INSTALL_PREFIX}/include/orocos
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_compile_definitions(vizkit3d_taste PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(vizkit3d_taste local_types_generate_c)
add_coverage(vizkit3d_taste)


# Install headers and libraries
install(FILES ${HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME}
)
        
install(TARGETS vizkit3d_taste
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

CONFIGURE_FILE("vizkit3d_taste.pc.in" "vizkit3d_taste.pc" @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/vizkit3d_taste.pc
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig
)


