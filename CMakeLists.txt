cmake_minimum_required(VERSION 3.30)
# set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS ON CACHE BOOL "")
include(EnableCxxImportStd.cmake)
project(example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_CXX_MODULE_STD ON)

add_executable(example main.cpp)
target_sources(example PRIVATE FILE_SET CXX_MODULES FILES foo.cppm)