cmake_minimum_required(VERSION 3.13.0)

set( SRC_FILES
    src/main.cpp
)



add_executable( Application ${SRC_FILES} )

target_link_libraries( Application
    PRIVATE GameLib
)