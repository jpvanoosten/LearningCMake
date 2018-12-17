cmake_minimum_required(VERSION 3.13.0)

# Specify configurable options
option( BUILD_SHARED_LIBS "Build shared libs?" ON )

# Make sure DLL and EXE targets go to the same directory.
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # Output directory for static lib (.LIB)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) # Output directory for shared lib (.DLL)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) # Output directory for executables (.EXE)

# Use solution folders.
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Version information
set(LCM_VERSION_MAJOR 1)
set(LCM_VERSION_MINOR 0)
set(LCM_VERSION_PATCH 0)
set(LCM_VERSION_TWEAK 0)

set(LCM_VERSION
    ${LCM_VERSION_MAJOR}.${LCM_VERSION_MINOR}.${LCM_VERSION_PATCH}.${LCM_VERSION_TWEAK}
)

project( LearningCMake VERSION ${LCM_VERSION} LANGUAGES CXX )

# Enable multithreaded builds
if( MSVC )
    add_compile_options(/MP)
endif()

add_subdirectory(GameLib)
add_subdirectory(Application)

# Set the startup project.
set_directory_properties( PROPERTIES 
    VS_STARTUP_PROJECT Application
)

