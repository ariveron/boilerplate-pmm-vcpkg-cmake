cmake_minimum_required(VERSION 3.2)

# Name and version project
project(my_project_name VERSION 0.0.0)

# Creates compile_commands.json, used by CCLS
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Destination for binary output files
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include and configure PMM
include(pmm.cmake)
pmm(
  # Use vcpkg
  VCPKG
  # Specify vcpkg branch, tag, or revision
  REVISION master
  # Space seperated list of required vcpkg packages
  REQUIRES fmt
)

# Find required packages for project
find_package(fmt CONFIG REQUIRED)

# Add source directory
add_subdirectory(src)
