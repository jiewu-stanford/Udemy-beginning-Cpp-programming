#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main()
{
	int num {};
	double total {};
	std::string name {};
	std::string info {"Moe 100 1234.5678"};
	std::istringstream iss {info};
	
	iss >> name >> num >> total;
	std::cout 	<< std::setw(10) << std::left << name
				<< std::setw(5) << num
				<< std::setw(10) << total << std::endl;
				
				
	std::cout << "\n-------------------------------------" << std::endl;
	
	
	std::ostringstream oss {};
	oss << std::setw(10) << std::left << name
		<< std::setw(5) << num
		<< std::setw(10) << total << std::endl;
	std::cout << oss.str() << std::endl;
	
	
	std::cout << "\n-------------------------------------" << std::endl;
	
	
	int value {};
	std::string entry {};
	bool done {false};
	do {
		std::cout << "Please enter an integer: ";
		std::cin >> entry;
		std::istringstream iss {entry};
		if (iss >> value)
			done = true;
		else
			std::cout << "That is not an integer. Please try again." << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	} while (!done);
	
	std::cout << "You entered the integer: " << value << std::endl;
	
	return 0;
}