# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

esrocos_build_taste(vizkit3d_robot_widgets
    SOURCES
    test_robot
    vizkit3d_robot
    BINARIES
    work/binaries/x86_partition
    DEPENDS
#    vizkit3d_taste
    vizkit3d_types
 #   vizkit3d_lib
    vizkit3d_headers
)
