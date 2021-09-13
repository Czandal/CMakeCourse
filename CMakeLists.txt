cmake_minimum_required(VERSION 3.21)

project(Machine1 VERSION 1.0)

add_executable(${PROJECT_NAME} main.cpp)


#options
option(USE_MACHINELIB "MachineLib description" OFF)
#end of options

#config file
configure_file(Machine1conf.h.in Machine1conf.h)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})



#if we use MACHINELIB
if(USE_MACHINELIB)
add_subdirectory(MachineLib)

list(APPEND EXTRA_LIBS "MachineLib")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MachineLib")
list(APPEND EXTRA_LINKS "MachineLib/")
endif()

target_include_directories(${PROJECT_NAME}
PUBLIC ${EXTRA_INCLUDES}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC ${EXTRA_LIBS}
)

target_link_directories(${PROJECT_NAME}
 PUBLIC ${EXTRA_LINKS}
 )

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/Machine1.conf" DESTINATION include)

