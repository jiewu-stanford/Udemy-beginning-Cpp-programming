#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> vowels {'a','e','i','o','u'};
	
	const int days_of_year {365};
	vector <double> high_temps (days_of_year,32);
	cout << "\nThe fifth highest temperature is: " << high_temps[4] << endl;
	
	vector <int> test_scores (3);
	cout << "\nThe 2nd test score is: " << test_scores.at(1) << endl;
	test_scores.at(1) = 90;
	cout << "\nThe 2nd test score is: " << test_scores.at(1) << endl;
	cout << "\nThere are " << test_scores.size() << " scores in the record." << endl;
	
	int extra_score {0};
	cout << "\nAdd a score: ";
	cin >> extra_score;
	test_scores.push_back(extra_score);
	cout << "\nAdd a score again: ";
	cin >> extra_score;
	test_scores.push_back(extra_score);
	cout << "\nThere are " << test_scores.size() << " scores in the record." << endl;
	cout << "\nTest scores are now: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	
	vector <vector<int>> movie_rating
	{
		{0,4,3,5},
		{1,1,2,3},
		{2,4,5,4}
	};
	cout << "\nThe 2nd reviewer gives a rating of " << movie_rating.at(1).at(2) << " to the 3rd movie" << endl;
	
	return 0;
}