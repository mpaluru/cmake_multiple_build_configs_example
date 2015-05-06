cmake_minimum_required(VERSION 3.0)

project(full_cmake_sample_project)

add_subdirectory(libadd)
add_subdirectory(libsub)

if( "${CMAKE_BUILD_TYPE}" STREQUAL "Release" )
    add_definitions("-DRELEASE_BUILD")
else()
    add_definitions("-DDEBUG_BUILD")
endif()

add_executable(myprogram main.c)
target_link_libraries(myprogram add sub)
install(
    TARGETS myprogram
    DESTINATION bin
)
