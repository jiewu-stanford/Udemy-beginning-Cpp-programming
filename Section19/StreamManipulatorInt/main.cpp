#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "================ BASE ================" << std::endl;
	int num {255};
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	std::cout << "--------------------------------" << std::endl;
	
	std::cout << std::showbase;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	std::cout << "--------------------------------" << std::endl;
	
	std::cout << std::showbase << std::uppercase;
	std::cout << std::hex << num << std::endl;
	
	
	std::cout << "\n\n================ SIGN ================" << std::endl;
	int p {255};
	std::cout << std::dec << std::showpos;	// only works for dec
	std::cout << p << std::endl;
	
	
	std::cout << std::resetiosflags(std::ios::basefield);
	std::cout << std::resetiosflags(std::ios::showbase);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::uppercase);
	
	
	return 0;
}