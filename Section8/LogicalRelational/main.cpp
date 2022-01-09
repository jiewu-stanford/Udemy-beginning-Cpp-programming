#include <iostream>

using namespace std;

int main()
{
	cout << boolalpha;
	
	int num {};
	const int lowerbd {10};
	const int upperbd {20};
	bool within_bounds {false};
	bool outside_bounds {false};
	bool on_bounds {false};
	
	cout << "Enter an integer, the lower bound is " << lowerbd << " and the upper bound is " << upperbd << ":" << endl;
	cin >> num;
	
	within_bounds = (num > lowerbd && num < upperbd);
	cout << num << " is between " << lowerbd << " and " << upperbd << ": " << within_bounds << endl;
	outside_bounds = (num < lowerbd || num > upperbd);
	cout << num << " is outside the range of " << lowerbd << " and " << upperbd << ": " << outside_bounds << endl;
	on_bounds = (num == lowerbd || num == upperbd);
	cout << num << " is on one of the two bounds which are " << lowerbd << " and " << upperbd << ": " << on_bounds << endl;
	
	return 0;
}