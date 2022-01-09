#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::ifstream in_file;
	std::string word, keyword;
	std::vector<std::string> words;
	int count;
	
	// ========================= READ IN =========================
	in_file.open("../../Challenge3/romeojuliet.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;
	}
	while (in_file >> word) {
		words.push_back(word);
	}
	in_file.close();
	
	
	// ========================= SEARCH =========================
	std::cout << "Enter the substring to search for: ";
	std::cin >> keyword;
	std::cout << words.size() << " words were searched..." << std::endl;
	count = 0;
	for (const auto &w: words)
		if (w.find(keyword)!= std::string::npos)
			count ++;
	std::cout << "The substring " << keyword << " was found " << count << " times." << std::endl;
	
	return 0;
}