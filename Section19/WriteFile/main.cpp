#include <iostream>
#include <fstream>
#include <string>

int main()
{
	{
		std::ofstream out_file {"../../WriteFile/output.txt",std::ios::app};
		if (!out_file) {
			std::cerr << "ERROR: problem creating file" << std::endl;
			return 1;
		}
		
		std::string line;
		std::cout << "Enter your favoriate club name: ";
		std::getline(std::cin, line);
		out_file << line << std::endl;
		out_file.close();
	}
		
	std::cout << "\n---------------------------------------" << std::endl;
			
	{
		std::ifstream in_string {"../../WriteFile/poem.txt"};
		std::ofstream out_string {"../../WriteFile/poem_copy.txt"};
		if (!in_string) {
			std::cerr << "ERROR: problem opening file" << std::endl;
			return 1;
		}
		if (!out_string) {
			std::cerr << "ERROR: problem creating file" << std::endl;
			return 1;
		}
		
		std::string line;
		while (std::getline(in_string,line))
			out_string << line << std::endl;
			
		in_string.close();
		out_string.close();
		
		std::cout << "File copied" << std::endl;
	}
	
	std::cout << "\n---------------------------------------" << std::endl;
	
	{
		std::ifstream in_char {"../../WriteFile/poem.txt"};
		std::ofstream out_char {"../../WriteFile/poem_copy_copy.txt"};
		if (!in_char) {
			std::cerr << "ERROR: problem opening file" << std::endl;
			return 1;
		}
		if (!out_char) {
			std::cerr << "ERROR: problem creating file" << std::endl;
			return 1;
		}
		
		char c;
		while (in_char.get(c))
			out_char.put(c);
			
		in_char.close();
		out_char.close();
		
		std::cout << "File copied" << std::endl;
	}
	
	return 0;
}