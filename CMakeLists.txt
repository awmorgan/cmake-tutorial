# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(HelloCMake C)

# Add static library
add_library(mathutils STATIC
    mathlib/mathutils.c
)

target_include_directories(mathutils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/mathlib
)

add_executable(HelloCMake main.c greet.c)
target_link_libraries(HelloCMake PRIVATE mathutils)

# Add a custom target to clean extra.log
add_custom_target(clean_extra
    COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_BINARY_DIR}/extra.log
    COMMENT "Cleaning extra.log"
)