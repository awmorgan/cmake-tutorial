# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(HelloCMake C)

add_executable(HelloCMake main.c greet.c)

# Add a custom target to clean extra.log
add_custom_target(clean_extra
    COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_BINARY_DIR}/extra.log
    COMMENT "Cleaning extra.log"
)