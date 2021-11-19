cmake_minimum_required(VERSION 3.20)
project(LaboCribles)

set(CMAKE_CXX_STANDARD 20)

add_executable(LaboCribles main.cpp countListTableau.cpp countListTableau.h
        affichageTableau.cpp affichageTableau.h saisieVerification.cpp
        saisieVerification.h InitTableau.cpp initTableau.h checkNbPremier.cpp checkNbPremier.h)
