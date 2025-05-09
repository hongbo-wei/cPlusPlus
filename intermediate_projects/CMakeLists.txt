# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(CurveFitProgram VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "/downloads/github/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")

# Find the GSL library using vcpkg
find_package(GSL REQUIRED)

# Add the executable
add_executable(curve_fit curve_fit.cpp)

# Link the GSL libraries
target_link_libraries(curve_fit PRIVATE GSL::gsl GSL::gslcblas)

# cmake -DCMAKE_TOOLCHAIN_FILE=~/downloads/github/vcpkg/scripts/buildsystems/vcpkg.cmake ..