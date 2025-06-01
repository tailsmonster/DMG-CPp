cmake_minimum_required(VERSION 3.10)

project(DMG-CPp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(DMG-CPp src/main.cpp src/core.cpp)
target_include_directories(DMG-CPp PRIVATE include)

