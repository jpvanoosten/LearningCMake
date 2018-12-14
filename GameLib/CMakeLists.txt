cmake_minimum_required(VERSION 3.12.0)

project( GameLib LANGUAGES CXX )

set( HEADER_FILES
    inc/Game.h
)

set( SOURCE_FILES 
    src/Game.cpp
)

add_library( GameLib ${HEADER_FILES} ${SOURCE_FILES} )

