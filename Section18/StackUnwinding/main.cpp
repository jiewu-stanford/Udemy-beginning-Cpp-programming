#include <iostream>

void func_a();
void func_b();
void func_c();

int main()
{
	std::cout << "Starting main" << std::endl;
	try {
		func_a();
	}
	catch (int &ex) {
		std::cout << "caught error in main" << std::endl;
	}
	std::cout << "Ending main" << std::endl;
	return 0;
}



void func_a() {
	std::cout << "Starting func_a" << std::endl;
	func_b();
	std::cout << "Ending func_a" << std::endl;
}

void func_b() {
	std::cout << "Starting func_b" << std::endl;
	func_c();
//	try {
//		func_c();
//	}
//	catch (int &ex) {
//		std::cout << "caught error in func_c" << std::endl;
//	}
	std::cout << "Ending func_b" << std::endl;
}

void func_c() {
	std::cout << "Starting func_c" << std::endl;
	throw 100;
	std::cout << "Ending func_c" << std::endl;
}