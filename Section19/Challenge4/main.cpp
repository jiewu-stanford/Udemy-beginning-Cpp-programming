#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	std::ifstream in_file {"../../Challenge4/romeojuliet.txt"};
	std::ofstream out_file {"../../Challenge4/romeojuliet_numbered.txt"};
	
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;
	}
	if (!out_file) {
		std::cerr << "ERROR: problem creating file" << std::endl;
	}
	
	std::string line;
	int line_number {1};
	while (std::getline(in_file,line)) {
		if (line.length() > 0) {
			out_file << std::setw(6) << std::left << line_number << line << std::endl;
			line_number ++;
		}
		else
			out_file << std::endl;
	}
	
	std::cout << "\nLine numbering completed." << std::endl;
		
	in_file.close();
	out_file.close();
	
	return 0;
}