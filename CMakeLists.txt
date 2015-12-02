cmake_minimum_required(VERSION 2.8)
project(foo)

set(VERSION_MAJOR 1)
set(VERSION_MINOR 2)

include_directories("${PROJECT_BINARY_DIR}")

set(SDK_ROOT "${CMAKE_HOME_DIRECTORY}/SDK")

set(CMAKE_DEBUG_POSTFIX "_d")

add_subdirectory(src)