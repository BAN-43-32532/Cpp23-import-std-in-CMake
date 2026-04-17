cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF) # If you need this setting, place it before including import_std

# set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS ON CACHE BOOL "")
include(../import_std.cmake)

project(example LANGUAGES CXX)

add_executable(example main.cpp)
target_sources(example PRIVATE FILE_SET CXX_MODULES FILES foo.cppm)