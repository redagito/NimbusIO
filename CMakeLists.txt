# Minimum cmake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(NimbusIO)

# Version
set(NimbusIO_VERSION_MAJOR 1)
set(NimbusIO_VERSION_MINOR 0)

# Include
include_directories(
	${CMAKE_SOURCE_DIR}/include
)

# Sources
file(GLOB_RECURSE SRC_FILES
	${CMAKE_SOURCE_DIR}/source/*.cpp
	${CMAKE_SOURCE_DIR}/include/*.h
)

# Flags
# TODO Only for g++
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Add library
add_library(NimbusIO STATIC ${SRC_FILES})