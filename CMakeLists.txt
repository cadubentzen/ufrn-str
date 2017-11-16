cmake_minimum_required(VERSION 2.8)
project(UfrnSTR)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(Threads REQUIRED)

# Add src subdirectory
add_subdirectory(src)
