cmake_minimum_required(VERSION 3.29)
project(Test_Funzioni C)

set(CMAKE_C_STANDARD 11)

add_executable(Test_Funzioni main.c
        myFunctions.c
        myFunctions.h)
