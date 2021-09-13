#include <iostream>
#include <Machine1conf.h>

int main(int argc, char**argv)
{
	std::cout << "Hello CMake!\n";
	std::cout << argv[0]<<" " << Machine1_VERSION_MAJOR <<" "<< Machine1_VERSION_MINOR <<"\n";
#ifdef USE_MACHINELIB
	std::cout << Returner() << "\n";
#endif // !USE_MACHINELIB

	return 0;
}