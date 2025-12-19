# C++23 `import std` in CMake

A small CMake script to auto-enable the C++23 standard library module (`import std`).

## What this is

CMake requires an **experimental UUID** (`CMAKE_EXPERIMENTAL_CXX_IMPORT_STD`) to enable
`import std`. That UUID is version-specific and not documented in a stable interface.

This repository provides a minimal CMake script, `EnableCxxImportStd.cmake`, that extracts the required UUID from CMake source code on GitHub to enable `import std`.

## Usage

Include the script `EnableCxxImportStd.cmake` **before** `project()`:

```cmake
cmake_minimum_required(VERSION 3.30)
include(EnableCxxImportStd.cmake)
project(example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
add_executable(example main.cpp)
```

For a complete example, see the CMake and C++ sources in this repository.

## Requirements

- CMake version >= 3.30 (newer versions are recommended)
- A compiler with C++23 standard library module support