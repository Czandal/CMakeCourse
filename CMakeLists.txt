cmake_minimum_required(VERSION 3.21)

project(Machine1 VERSION 1.0)

configure_file(Machine1conf.h.in Machine1conf.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

add_subdirectory(MachineLib)

target_include_directories(${PROJECT_NAME} PUBLIC MachineLib)

target_link_libraries(${PROJECT_NAME} MachineLib)

target_link_directories(${PROJECT_NAME} PUBLIC MachineLib/)