#include <iostream>
#include <Machine1conf.h>
#include "Function.hpp"
int main(int argc, char**argv)
{
	std::cout << "Hello CMake!\n";
	std::cout << argv[0]<<" " << Machine1_VERSION_MAJOR <<" "<< Machine1_VERSION_MINOR <<"\n";
	std::cout << Returner() << "\n";
	return 0;
}