project(Xinglang)
cmake_minimum_required(VERSION 3.12)

add_executable(xinglang ${CMAKE_SOURCE_DIR}/src/xinglang.cpp)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")
include(spdlog)

target_link_libraries(xinglang PRIVATE spdlog)