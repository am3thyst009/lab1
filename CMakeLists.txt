cmake_minimum_required(VERSION 3.10)

project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyApp src/main.cpp src/utils.cpp)
