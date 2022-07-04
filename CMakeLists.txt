
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(uart_debugger)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB LIB_FILES ${PROJECT_SOURCE_DIR}/lib/*.hpp)

add_executable(uart_debugger main.cpp ${LIB_FILES} ${SRC_FILES})

