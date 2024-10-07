
# CMake version check
cmake_minimum_required(VERSION 3.29)
# Create project "simple_example"
project(prg1_e_04_nbre_premiers_Ethan0079)
# Enable c++14 standard
set(CMAKE_CXX_STANDARD 14)
# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES main.cpp main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(prg1_e_04_nbre_premiers_Ethan0079 ${SOURCE_FILES})