#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	double num {1234.5678};
	std::string hello {"Hello"};
	
	std::cout << "================ FIELD WIDTH ================" << std::endl;
	std::cout 	<< std::setw(10) << num 		// setw applies to next input only
				<< hello << std::endl;
				
				
	std::cout << "================ JUSTIFICATION ================" << std::endl;
	std::cout 	<< std::setw(10) << std::left	// setw uses right justification by default
				<< num << hello << std::endl;
				
				
	std::cout << "================ FILL ================" << std::endl;
	std::cout 	<< std::setfill('*') << std::setw(10) << num 	// fill applies to setw only
				<< std::setfill('-') << std::setw(10) << hello 
				<< std::setw(10) << hello << std::endl;		// fill is persistent
	
	return 0;
}