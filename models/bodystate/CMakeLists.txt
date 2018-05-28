# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

esrocos_build_taste(vizkit3d_bodystate_widgets
    SOURCES
    test_bodystate
    vizkit3d_bodystate
    vizkit3d_rigidbodystate
    BINARIES
    binary.c/binaries/x86_partition
)

add_dependencies(vizkit3d_bodystate_widgets
    vizkit3d_types    
    vizkit3d_lib
    vizkit3d_headers
)
