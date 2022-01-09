#include <iostream>

using namespace std;

int main()
{
	float a {0};
	float b {0};
	a = 1.8;
	b = 1.5;
	if (a < b) cout << "a is greater than b" << endl;
	
	int num1 {0};
	int num2 {0};
	num1 = num2 = 1000;
	cout << "number 1 is " << num1 << endl;
	cout << "number 2 is " << num2 << endl;
	
	const double USDEUR {1.18};
	double EUR {0.0};
	double USD {0.0};	
	cout << "Enter the value in EUR: ";
	cin >> EUR;
	USD = EUR * USDEUR;
	cout << EUR << " euros is equivalent to " << USD << " dollars" << endl;
	
	int counter {10};
	int result {0};
	cout << "pre-increment example: " << endl;
	result = ++counter;
	cout << "counter: " << counter << endl;
	cout << "result: " << result << endl;
	
	// post-increment
	counter = 10;
	result = 0;
	cout << "post-increment example: " << endl;
	result = counter++;
	cout << "counter: " << counter << endl;
	cout << "result: " << result << endl;
	
	counter = 10;
	result = 0;
	cout << "pre-increment combined with other operation example: " << endl;
	result = ++counter + 10;
	cout << "counter: " << counter << endl;
	cout << "result: " << result << endl;
	
	
	counter = 10;
	result = 0;
	cout << "post-increment combined with other operation example: " << endl;
	result = counter++ + 10;
	cout << "counter: " << counter << endl;
	cout << "result: " << result << endl;
	
	return 0;
}