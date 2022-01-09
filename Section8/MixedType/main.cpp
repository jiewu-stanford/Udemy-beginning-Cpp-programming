#include <iostream>

using namespace std;

int main()
{
	int total_amount {100};
	int total_number {8};
	double average {};
	cout << average << endl;
	
	average = total_amount/total_number;
	cout << average << endl;
	
	average = static_cast<double>(total_amount)/total_number;
	cout << average << endl;
	
	
	int total {};
	int num1 {}, num2 {}, num3 {};
	double avg {};
	const int count {3};
	
	cout << "Enter 3 integers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	total = num1 + num2 + num3;
	cout << "The 3 integers you entered are: " << num1 << ", " << num2 << ", " << num3 << endl;
	total = num1 + num2 + num3;
	avg = static_cast<double>(total)/count;
	// avg = (double)total/count;	old-style conversion
	cout << "The average of these numbers is: " << avg << endl;
	
	return 0;
}