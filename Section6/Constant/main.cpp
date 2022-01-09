#include <iostream>

using namespace std;

int main()
{
	int number_of_small_rooms {0};
	cout << "\nHow many small rooms to clean: ";
	cin >> number_of_small_rooms;
	
	int number_of_large_rooms {0};
	cout << "\nHow many large rooms to clean: ";
	cin >> number_of_large_rooms;
	
	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	double cost {0.0};
	cost = number_of_small_rooms*price_per_small_room + number_of_large_rooms*price_per_large_room;
	
	const double tax_rate {0.06};
	double tax {0.0};
	tax = cost*tax_rate;
	
	cout << "Price per small room is $"
		 << price_per_small_room << endl;
	cout << "Price per large room is $"
		 << price_per_large_room << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << cost+tax << endl;
	
	const int expiry_date {30};
	cout << "This quote expires in "
		 << expiry_date << " days." << endl;
	
	return 0;
}