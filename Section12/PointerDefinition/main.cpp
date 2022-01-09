#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num {10};
	cout << "Value of num is " << num << endl;
	cout << "Size of num is " << sizeof num << endl;
	cout << "Address of num is " << &num << endl;
	
	int *ptr {nullptr};
	cout << "Value of ptr is " << ptr << endl;
	cout << "Size of ptr is " << sizeof ptr << endl;
	cout << "Address of ptr is " << &ptr << endl;
	
	ptr = &num;
	cout << "Value of ptr is " << ptr << endl;
	cout << "Size of ptr is " << sizeof ptr << endl;
	cout << "Address of ptr is " << &ptr << endl;
	cout << "----------------------------------" << endl;
	
	
	int score {100};
	int *score_ptr {&score};
	cout << *score_ptr << endl;
	*score_ptr = 200;
	cout << *score_ptr << endl;
	cout << score << endl;
	score = 400;
	cout << *score_ptr << endl;
	cout << "----------------------------------" << endl;
	
	
	vector<string> nations {"China","Canada","US"};
	vector<string> *nation_ptr {nullptr};
	nation_ptr = &nations;
	cout << "First nation is " << (*nation_ptr).at(0) << endl;
	for (auto n: *nation_ptr)
		cout << n << endl;
	
	
	double high_temp {128.7}, low_temp {35.8};
	const double *const_temp_ptr {&high_temp};
	double *const temp_const_ptr {&high_temp};
	const double *const const_temp_const_ptr {&high_temp};
	
	return 0;
}