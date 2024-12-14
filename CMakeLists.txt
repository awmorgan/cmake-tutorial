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

# Enable testing
enable_testing()

# Add test executable
add_executable(test_mathlib tests/test_mathlib.c)
target_link_libraries(test_mathlib PRIVATE mathlib)

# Add test to CTest
add_test(NAME MathLibTest COMMAND test_mathlib)

