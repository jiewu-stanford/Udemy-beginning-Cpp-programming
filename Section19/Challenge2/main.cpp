#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::ifstream in_file;
	std::vector<std::string> students;
	std::string key, name, response;
	std::vector<int> scores;
	int score, total_scores;
	
	// ========================= READ IN =========================
	in_file.open("../../Challenge2/responses.txt");
	if (!in_file) {
		std::cerr << "ERROR: problem opening file" << std::endl;
		return 1;
	}
	in_file >> key;
	while (in_file >> name >> response) {
		students.push_back(name);
		score = 0;
		for (size_t ii=0; ii<key.length(); ++ii)
			score += (key.at(ii)==response.at(ii));
		scores.push_back(score);
	}
	in_file.close();
	
	
	// ========================= DISPLAY =========================
	const int student_field_width {25};
	const int score_field_width {10};
	// header
	std::cout 	<< std::endl;
	std::cout 	<< std::setw(student_field_width) << std::left << "Student"
				<< std::setw(score_field_width) << std::right << "Score" << std::endl;
	std::cout 	<< std::setw(student_field_width+score_field_width)
				<< std::setfill('-') << "" << std::endl;
	std::cout 	<< std::setfill(' ');
	
	if (students.size() > 0) {
		// body (cf. header)
		total_scores = 0;
		for (size_t ii=0;ii<students.size();++ii) {
			std::cout	<< std::setw(student_field_width) << std::left << students.at(ii)
						<< std::setw(score_field_width) << std::right << scores.at(ii) << std::endl;
			total_scores += scores.at(ii);
		}
		// footer (cf. header)
		std::cout 	<< std::setw(student_field_width+score_field_width)
					<< std::setfill('-') << "" << std::endl;
		std::cout 	<< std::setfill(' ');
		std::cout	<< std::setprecision(1) << std::fixed;
		std::cout	<< std::setw(student_field_width) << std::left << "Average Score"
					<< std::setw(score_field_width) << std::right << static_cast<double>(total_scores)/scores.size() << std::endl;
	}
	
	std::cout << std::endl;
	
	return 0;
}