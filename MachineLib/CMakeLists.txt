add_library(MachineLib Function.cpp Function.hpp)    

install(TARGETS MachineLib DESTINATION lib)
install(FILES Function.hpp DESTINATION include)