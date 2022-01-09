#include <iostream>
#include <vector>
#include <string>

using namespace std;

int square (int &n);

int main()
{
	vector<string> nations {"China","Canada","US"};
	for (auto s: nations)	// s is a COPY of each string in the vector
		s = "World";	
	for (auto const s: nations)
		cout << s << " ";
	cout << endl;
	
	for (auto &s: nations)	// s points to each string in the vector
		s = "World";
	for (auto const &s: nations)
		cout << s << " ";
	cout << endl;
	cout << "--------------------------------" << endl;
	
	
	// reference as constant pointer
	int num {100};
	int &ref {num};
//	int &ref {100};	// ERROR, cannot assign r-value to l-value, can only assign l-value to l-value only
	cout << ref << endl;
	num = 200;
	cout << ref << endl;
	ref = 300;
	cout << num << endl;
	
	cout << square(num) << endl;
//	cout << square(300) << endl;	// ERROR, cannot assign r-value to l-value, can only assign l-value to l-value only
	
	return 0;
}

int square (int &n)
{
	return n*n;
}