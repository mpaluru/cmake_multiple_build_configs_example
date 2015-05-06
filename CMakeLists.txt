cmake_minimum_required(VERSION 3.0)

project(multiple_configs_project)

include(ExternalProject)

ExternalProject_Add(
    sample_project_debug
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/sample_project
    CMAKE_ARGS -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/debug_install
)

ExternalProject_Add(
    sample_project_release
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/sample_project
    CMAKE_ARGS -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/release_install
)
