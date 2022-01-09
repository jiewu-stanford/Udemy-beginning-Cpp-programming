#include <iostream>

using namespace std;

int main()
{
	double a {}, b {}, result {};
	cout << "Enter two numbers for division separated by space:";
	cin >> a >> b;
	if (a != b)
		cout << "The larger of the two is " << ((a > b) ? a : b) << endl;
	result = (b != 0) ? (a/b) : 0;
	cout << a << " divided by " << b << " gives " << result << endl;
	
	int num {};
	cout << "Enter an integer:";
	cin >> num;
	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;
	
	return 0;
}