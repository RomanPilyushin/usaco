cmake_minimum_required(VERSION 3.10)
project(USACOSolution)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(USACOSolution
        src/main.cpp
        src/birthday-party.cpp
        src/teleportation.cpp
)
