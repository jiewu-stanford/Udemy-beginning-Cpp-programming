#include <iostream>
#include <fstream>

int main()
{
	std::ifstream in_file;
	std::string line, name;
	int num;
	double total;
	char c;
	
	in_file.open("../../ReadFile/Test.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;	// std::exit(1);
	}
	in_file >> line >> num >> total;
	std::cout << line << std::endl;
	std::cout << num << std::endl;
	std::cout << total << std::endl;
	
	in_file.close();
	
	std::cout << "\n---------------------------------------" << std::endl;
	
	in_file.open("../../ReadFile/Person.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;	// std::exit(1);
	}
//	while (!in_file.eof()) {
//		in_file >> name >> num >> total;
	while (in_file >> name >> num >> total) {
		std::cout	<< std::setw(10) << std::left << name
					<< std::setw(10) << num
					<< std::setw(10) << total << std::endl;
	}
	
	in_file.close();
	
	std::cout << "\n---------------------------------------" << std::endl;
	
	in_file.open("../../ReadFile/poem.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;	// std::exit(1);
	}
	while (std::getline(in_file,line)) {
		std::cout << line << std::endl;
	}
	
	in_file.close();
	
	std::cout << "\n---------------------------------------" << std::endl;
	
	in_file.open("../../ReadFile/poem.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;	// std::exit(1);
	}
	while (in_file.get(c)) {
		std::cout << c;
	}
	
	std::cout << std::endl << std::endl;
	
	return 0;
}