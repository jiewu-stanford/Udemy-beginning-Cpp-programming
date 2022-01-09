#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "================ PRECISION ================" << std::endl;
	double num {1234.5678};
	std::cout << num << std::endl;			// default max 6 digits
	
	num = 123456789.987654321;
	std::cout << num << std::endl;
	std::cout << std::setprecision(9);
	std::cout << num << std::endl;
	std::cout << std::setprecision(3) << std::fixed;	// applied to after decimal point
	std::cout << num << std::endl;
	
	
	std::cout << "================ SCIENTIFIC ================" << std::endl;
	std::cout << std::setprecision(3) << std::scientific;
	std::cout << num << std::endl;
	std::cout << std::setprecision(3) << std::scientific << std::uppercase;
	std::cout << num << std::endl;
	std::cout << std::setprecision(3) << std::scientific 
				<< std::uppercase << std::showpos;
	std::cout << num << std::endl;
	
	
	std::cout << "================ DECIMAL ================" << std::endl;
	num = 12.3;
	std::cout << std::fixed << std::showpoint;
	std::cout << num << std::endl;
	
	
	std::cout.unsetf(std::ios::scientific|std::ios::fixed);
	std::cout << std::setprecision(6);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::showpoint);
	
	
	return 0;
}