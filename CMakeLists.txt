cmake_minimum_required(VERSION 3.10)

# Set the project name
project(GameOfLife)

# Specify the C++ standard (M1 Mac likes 17 or 20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake to find your source files
# Replace 'main.cpp' with your actual filename
add_executable(GameOfLife main.cpp)