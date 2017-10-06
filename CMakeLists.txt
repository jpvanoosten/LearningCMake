cmake_minimum_required(VERSION 3.8)

project(hello-cmake)

add_executable(hello src/main.cpp)

add_subdirectory(tests)

install(TARGETS hello DESTINATION hello/bin)