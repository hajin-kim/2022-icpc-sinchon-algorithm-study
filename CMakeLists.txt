cmake_minimum_required(VERSION 3.22)
project(2022-icpc-sinchon-algorithm-study)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE CppSources *.cpp)
foreach (CppSource ${CppSources})
    string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" Executable "${CppSource}")
    string(REPLACE "/" "_" Executable "${Executable}")
    add_executable(${Executable} ${CppSource})
endforeach ()
