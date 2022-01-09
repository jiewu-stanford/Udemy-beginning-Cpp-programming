#include <iostream>

using namespace std;

int main()
{
	int another_array [] {1,2,3,4,5};
	
	const int days_in_year {365};
	double high_temps [days_in_year] {12,14,11};
	high_temps[0] = 10;
	cout << "\nThe first high temperature is now: " << high_temps[0] << endl;
	
	char vowels [] {'a','e','i','o','u'};
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "\nThe last vowel is: " << vowels[4] << endl;
	
	int test_scores [3] {90};
	cout << "\nThe 1st test score is: " << test_scores[0] << endl;
	cout << "\nThe 2nd test score is: " << test_scores[1] << endl;
	cout << "\nThe 3rd test score is: " << test_scores[2] << endl;
	
	cout << "Update the three scores (press ENTER to proceed):" << endl;
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	
	cout << "\nThe test scores are located at: " << test_scores << endl;
	
	const int nrows {3};
	const int ncols {4};
	int movie_rating [nrows][ncols]
	{
		{0,4,3,5},
		{1,1,2,3},
		{2,4,5,4}
	};
	cout << "\nThe 2nd reviewer gives a rating of " << movie_rating[1][2] << " to the 3rd movie" << endl;
	
	return 0;
}