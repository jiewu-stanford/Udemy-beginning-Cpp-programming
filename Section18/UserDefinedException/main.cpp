#include <iostream>

class DivideByZeroException {
	
};

class NegativeValueException {
	
};


double calculate_mpg(int miles, int gallons) {
	if (gallons==0)
		throw DivideByZeroException();
	if (miles < 0 || gallons < 0)
		throw NegativeValueException();
	return static_cast<double>(miles)/gallons;
}


int main()
{
	int miles {}, gallons {};
	double miles_per_gallon {};
	
	std::cout << "Enter the miles: ";
	std::cin >> miles;
	std::cout << "Enter the gallons: ";
	std::cin >> gallons;
	
	try {
		miles_per_gallon = calculate_mpg(miles, gallons);
		std::cout << "Result: " << miles_per_gallon << std::endl;
	}
	catch (const DivideByZeroException &ex) {
		std::cerr << "ERROR: cannot divide by zero" << std::endl;
	}
	catch (const NegativeValueException &ex) {
		std::cerr << "ERROR: miles or gallons cannot be negative" << std::endl;
	}
	catch (...) {
		std::cerr << "Unknown exception" << std::endl;
	}
	std::cout << "Bye~~~~~~~" << std::endl;
	
	return 0;
}