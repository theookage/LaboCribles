cmake_minimum_required(VERSION 3.20)
project(LaboCribles)

set(CMAKE_CXX_STANDARD 20)

add_executable(LaboCribles main.cpp countListTableau.cpp affichageTableau.cpp
        affichageTableau.h countListTableau.h)
