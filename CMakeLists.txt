cmake_minimum_required(VERSION 3.16)
project(dummy LANGUAGES C CXX)

include_directories(template)
include_directories(template/ac-library)

file(GLOB_RECURSE SOURCES "**/main.cpp")

if(SOURCES)
    list(GET SOURCES 0 MAIN_SOURCE)
    get_filename_component(TARGET_NAME ${MAIN_SOURCE} DIRECTORY)
    get_filename_component(TARGET_NAME ${TARGET_NAME} NAME)
    add_executable(${TARGET_NAME} ${MAIN_SOURCE})
else()
    message(FATAL_ERROR "No main.cpp found in subdirectories")
endif()
