cmake_minimum_required(VERSION 3.30)
project(SmartPointer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main main.cpp)
# target_compile_features(${TARGET_NAME} PROPERTIES cxx_std_17)
# target_link_libraries(main m)