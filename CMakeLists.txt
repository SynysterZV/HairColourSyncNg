cmake_minimum_required(VERSION 3.21)
project(HairColourSyncNg LANGUAGES CXX)

set(BUILD_TESTS OFF CACHE BOOL "Disable CommonLibSSE-NG Tests")
add_subdirectory("${CMAKE_SOURCE_DIR}/extern/CommonLibSSE-NG" CommonLibSSE-NG EXCLUDE_FROM_ALL)

set(SOURCE_FILES
    src/dllmain.cpp
    src/plugin.cpp
)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
target_compile_definitions(${PROJECT_NAME} PRIVATE NOMINMAX)
target_link_libraries(${PROJECT_NAME} PRIVATE CommonLibSSE::CommonLibSSE psapi)