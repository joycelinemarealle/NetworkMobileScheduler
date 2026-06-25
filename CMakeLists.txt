cmake_minimum_required(VERSION 4.2)
project(SpaceX)

set(CMAKE_CXX_STANDARD 17)

add_executable(SpaceX main.cpp
        starlink_mobile_sim/Phone.cpp
        starlink_mobile_sim/include/Phone.h
        starlink_mobile_sim/include/Satellite.h
        starlink_mobile_sim/main.cpp)
