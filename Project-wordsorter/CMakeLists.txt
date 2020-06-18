cmake_minimum_required(VERSION 3.15)
project(Project C)

set(CMAKE_C_STANDARD 99)

add_executable(Project main.c cmake-build-debug/output.txt cmake-build-debug/onliberty.txt cmake-build-debug/wizardofoz.txt cmake-build-debug/pride.txt functions.h functions.c structure.h)