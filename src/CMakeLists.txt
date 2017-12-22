# ======================================================================
#  FILE:  $URL$
# ======================================================================
#  PROJECT:             :  SARGON
#  VERSION              :  $Revision$
#  LANGUAGE             :  CMake script
#  AUTHOR               :  $LastChangedBy$ 
#  COPYRIGHT            :  AVOS - GMV,S.A.
#  COMPILER             :  cmake version 3.0.2
#  CREATED              :  $CreationDate$
#  CLASS                :  -
#  LAST MODIFIED        :  $LastChangedDate$
#  GENERATED FROM MODEL :  -
#  ORIGINAL MODEL AUTHOR:  -
# ----------------------------------------------------------------------
#  CMake build script for the vizkit3d_c library.
# ----------------------------------------------------------------------
#  HISTORY
#  $History$
# ======================================================================

find_package(Qt4 4.4 REQUIRED QtCore QtGui)
pkg_search_module(EIGEN3 REQUIRED eigen3)
pkg_search_module(SDF REQURED sdformat)
pkg_search_module(ESROCOS_TYPES_BASE REQUIRED esrocos_types_base)
pkg_search_module(ASN1_TYPES_SUPPORT REQURED asn1_types_support)

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
    vizkit3d_c.cpp
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
    vizkit3d_c.h
    waypointPluginWrapper.h
    wrapperTemplate.hpp
    )
    

#add_library(vizkit3d_taste SHARED
#    SOURCES ${SOURCES}
#    HEADERS ${HEADERS}
#    DEPS_PKGCONFIG vizkit3d vizkit3d-viz base-types base-viz robot_model-viz asn1_types asn1_types_support yaml-cpp)

# Target library
add_library(esrocos_vizkit3d_taste SHARED ${SOURCES})
set_target_properties(esrocos_vizkit3d_taste PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(esrocos_vizkit3d_taste PUBLIC 
   ${EIGEN3_INCLUDE_DIRS}
   ${SDF_INCLUDE_DIRS}
   ${QT_INCLUDES}
   ${ASN1_TYPES_SUPPORT_INCLUDE_DIRS}
   ${ESROCOS_TYPES_BASE_INCLUDE_DIRS}
   ${CMAKE_INSTALL_PREFIX}/include
   )

message(STATUS "ASN1_TYPES_SUPPORT_INCLUDE_DIRS: ${ASN1_TYPES_SUPPORT_INCLUDE_DIRS}")

# Install headers and libraries
install(FILES ${HEADERS}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include/gui/${CMAKE_PROJECT_NAME}
        )
        
install(TARGETS esrocos_vizkit3d_taste
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        )



