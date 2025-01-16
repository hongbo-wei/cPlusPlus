# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MazeGame)

# Specify the C++ standard to use
set(CMAKE_CXX_STANDARD 11)

# Add the source files to the project
set(SOURCES
    main.cpp
    initializeMaze.cpp
    generateMaze.cpp
    displayMaze.cpp
)

# Create an executable from the source files
add_executable(MazeGame ${SOURCES})
