cmake_minimum_required(VERSION 3.0)
project(CEGUI_Experiment LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

find_path(CEGUI_INCLUDE NAMES CEGUI PATH_SUFFIXES cegui-0 cegui-1)
find_library(CEGUI_LIB NAMES CEGUIBase-0)

file(GLOB_RECURSE CEGUI_Experiment_SOURCES "src/*.cpp")
file(GLOB_RECURSE CEGUI_Experiment_HEADERS "src/*.{hpp,hxx}")

add_executable(CEGUI_Experiment ${CEGUI_Experiment_SOURCES})

if (CEGUI_LIB AND CEGUI_LIB)
    message(Found CEGUI)
    target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${CEGUI_INCLUDE})
    target_link_libraries(${PROJECT_NAME} ${CEGUI_LIB})
endif()
