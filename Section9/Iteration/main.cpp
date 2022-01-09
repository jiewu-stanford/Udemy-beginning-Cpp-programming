#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	for (int ii {1}; ii < 25; ii+=3) {
		if (ii % 2 == 0)
			cout << ii << endl;
	}
	cout << endl << endl;
	
	
	
	int scores [] {100,99,96};
	cout << "standard for loop:" << endl;
	for (int ii {0}; ii < 3; ++ii) {
		cout << scores[ii] << endl;
	}
	cout << "range-based version:" << endl;
	for (auto score: scores)
		cout << score << endl;
	cout << endl << endl;
	
	
	
	for (int ii{1}, jj{5}; ii < 6; ++ii, ++jj) {
		cout << ii << " X " << jj << " = " << (ii*jj) << endl;
	}
	cout << endl << endl;
	
	
	
	for (int i{1}; i < 101; i++) {
		cout << i << ((i % 10 == 0) ? "\n" : " ");
//		cout << i;
//		if (i % 10 == 0)
//			cout << endl;
//		else
//			cout << " ";
	}
	cout << endl << endl;
	
	
	
	vector <int> nums {10,20,30,40,50};
	for (unsigned ii{0}; ii < nums.size(); ++ii)
		cout << nums[ii] << endl;
	cout << endl << endl;
	
	
	
	double average_temp {}, running_sum {};
	cout << "exterior declaration style:" << endl;
	vector <double> temps {87.2,77.1,80.0,72.5};
	for (auto temp: temps)
		running_sum += temp;
	if (temps.size() != 0)
		average_temp = running_sum /temps.size();
	cout << fixed << setprecision(2);
	cout << "The average temperature is " << average_temp << endl;
	
	cout << "interior declaration style:" << endl;
	running_sum = 0;
	int size {};
	for (auto temp: {87.2,77.1,80.0,72.5}) {
		running_sum += temp;
		++size;
	}
	if (size != 0)
		average_temp = running_sum / size;
	cout << "The average temperature is " << average_temp << endl;
	cout << endl << endl;
	
	
	
	for (auto c: "this is a string")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;
	cout << endl << endl;
	
	return 0;
}