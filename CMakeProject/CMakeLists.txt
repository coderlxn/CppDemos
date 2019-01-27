cmake_minimum_required(VERSION 2.8)

project(CMakeProject)

#dubug 模式
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

add_executable(${PROJECT_NAME} "main.cpp")
