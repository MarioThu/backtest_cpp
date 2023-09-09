cmake_minimum_required(VERSION 3.16)
project(trad VERSION 0.1)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}"/build/bin")
add_executable(trad main.cpp)
add_subdirectory(indicators)
add_subdirectory(core)


INSTALL(TARGETS trad)