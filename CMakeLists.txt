cmake_minimum_required(VERSION 3.21)

project(Machine1)

add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(MachineLib)

target_include_directories(${PROJECT_NAME} PUBLIC MachineLib)

target_link_libraries(${PROJECT_NAME} MachineLib)

target_link_directories(${PROJECT_NAME} PUBLIC MachineLib/)


