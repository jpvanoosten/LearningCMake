cmake_minimum_required(VERSION 3.12.0)

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

add_subdirectory(GameLib)
add_subdirectory(Application)

# Set the startup project.
set_directory_properties( PROPERTIES 
    VS_STARTUP_PROJECT Application
)

