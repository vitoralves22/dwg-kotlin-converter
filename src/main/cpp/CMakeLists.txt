cmake_minimum_required(VERSION 3.10)
project(hello)

find_package(JNI REQUIRED)
include_directories(${JNI_INCLUDE_DIRS})

add_library(hello SHARED src/main/cpp/HelloJNI.cpp)

set_target_properties(hello PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/src/main/resources")