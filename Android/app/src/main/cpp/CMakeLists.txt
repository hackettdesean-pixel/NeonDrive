cmake_minimum_required(VERSION 3.22)

project(NeonDriveAndroid)

add_library(
    neondrive
    SHARED
    native.cpp
)
