# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

find_package(Qt4 4.4 REQUIRED QtCore QtGui)
pkg_search_module(EIGEN3 REQUIRED eigen3)
pkg_search_module(SDF REQURED sdformat)
pkg_search_module(ESROCOS_TYPES_BASE_SUPPORT REQUIRED esrocos_types_base_support)
pkg_search_module(ESROCOS_TYPES_SENSOR_SAMPLES_SUPPORT REQUIRED esrocos_types_sensor_samples_support)

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
    OUTDIR asn1
    IMPORT types/base types/sensor_samples
)

# Target library
add_library(vizkit3d_taste SHARED ${SOURCES})
set_target_properties(vizkit3d_taste PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(vizkit3d_taste PUBLIC 
   ${EIGEN3_INCLUDE_DIRS}
   ${SDF_INCLUDE_DIRS}
   ${QT_INCLUDES}
   ${ESROCOS_TYPES_BASE_SUPPORT_INCLUDE_DIRS}
   ${ESROCOS_TYPES_SENSOR_SAMPLES_SUPPORT_INCLUDE_DIRS}
   ${CMAKE_INSTALL_PREFIX}/include
   PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
add_dependencies(vizkit3d_taste local_types_generate_c)

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


