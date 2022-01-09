#include <iostream>

using namespace std;

int main()
{
	char mid_initial {'J'};
	cout << "My middle initial is " << mid_initial << endl;
	
	long population {7'600'000'000};
	cout << "There are " << population << " people on earth" << endl;
	
	bool truth {true};
	cout << "The value is " << truth << endl;
	
	short val1 {30000};
	short val2 {1000};
	long product {val1*val2}; // short produces error
	cout << "The product of " << val1 << " and " << val2 << " is " << product << endl;
}