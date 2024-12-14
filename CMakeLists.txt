# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(HelloCMake C)

# Add static library
add_library(mathlib STATIC
    mathlib/mathutils.c
)

target_include_directories(mathlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/mathlib
)

add_executable(HelloCMake main.c greet.c)
target_link_libraries(HelloCMake PRIVATE mathlib)

