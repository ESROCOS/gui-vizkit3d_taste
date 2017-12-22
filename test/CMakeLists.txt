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
#  CMake build script for the vizkit-taste library test
# ----------------------------------------------------------------------
#  HISTORY
#  $History$
# ======================================================================

sargon_find_qt4()
sargon_find_pkgconfig(Eigen3 eigen3 REQUIRED)

set(SOURCES
    test-bodystate.cpp
    test-range.cpp
    test-trajectory.cpp
    )
    
sargon_executable(test-bodystate
    SOURCES test-bodystate.cpp
    DEPS vizkit3d_c
    DEPS_PKGCONFIG vizkit3d asn1_types_support base-types yaml-cpp
    LIBS pthread)

sargon_executable(test-range
    SOURCES test-range.cpp
    DEPS vizkit3d_c
    DEPS_PKGCONFIG vizkit3d asn1_types_support base-types yaml-cpp
    LIBS pthread)

sargon_executable(test-trajectory
    SOURCES test-trajectory.cpp
    DEPS vizkit3d_c
    DEPS_PKGCONFIG vizkit3d asn1_types_support base-types yaml-cpp
    LIBS pthread)

sargon_executable(test-robot
    SOURCES test-robot.cpp
    DEPS vizkit3d_c
    DEPS_PKGCONFIG vizkit3d robot_model-viz asn1_types_support base-types yaml-cpp
    LIBS pthread)

