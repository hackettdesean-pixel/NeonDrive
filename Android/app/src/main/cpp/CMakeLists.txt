cmake_minimum_required(VERSION 3.20)

project(NeonDriveAndroid)


set(CMAKE_CXX_STANDARD 20)


add_library(

    NeonDrive

    SHARED

    ../../../../../Engine/Core/Application.cpp
    ../../../../../Game/Main.cpp

)


target_include_directories(

    NeonDrive

    PUBLIC

    ../../../../../

)
