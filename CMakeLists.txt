cmake_minimum_required(VERSION 4.2)
project(SpaceX)

set(CMAKE_CXX_STANDARD 17)

add_executable(SpaceX oldmain.cpp
        Phone.cpp
        include/Phone.h
        include/Satellite.h
        main.cpp)
