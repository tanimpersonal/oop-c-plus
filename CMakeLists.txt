cmake_minimum_required(VERSION 3.23)
project(oop_c_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(oop_c_plus
        class-basic.cpp)

add_executable(class-basic class-basic.cpp)
add_executable(encapsulation encapsulation.cpp)