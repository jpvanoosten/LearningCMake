cmake_minimum_required(VERSION 3.12.0)

project( GameLib LANGUAGES CXX )

set( HEADER_FILES
    inc/Game.h
)

set( SOURCE_FILES 
    src/Game.cpp
)

add_library( GameLib ${HEADER_FILES} ${SOURCE_FILES} )

target_include_directories( GameLib
    PUBLIC inc
)

if ( BUILD_SHARED_LIBS )
    set_target_properties( GameLib
        PROPERTIES
            DEFINE_SYMBOL GAME_EXPORTS
    )

    target_compile_definitions( GameLib 
        INTERFACE GAME_IMPORTS
    )
endif( BUILD_SHARED_LIBS )