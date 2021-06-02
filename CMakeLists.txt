cmake_minimum_required(VERSION 3.19)
project(SFML_Test)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML COMPONENTS graphics window system REQUIRED)

add_executable(SFML_Test main.cpp Game.cpp Game.h)
target_link_libraries(SFML_Test sfml-graphics sfml-window sfml-system)
