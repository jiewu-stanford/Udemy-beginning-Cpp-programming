#include <iostream>

using namespace std;

int main()
{
	int amount {};
	int dollars {}, quarters {}, dimes {}, nickles {}, pennies {};
	const int dollar_value {100}, quarter_value {25}, dime_value {10}, nickle_value {5};
	
	cout << "Enter an amount in cents: ";
	cin >> amount;
	
	dollars = amount / dollar_value;
	amount = amount % dollar_value;
	quarters = amount / quarter_value;
	amount = amount % quarter_value;
	dimes = amount / dime_value;
	amount = amount % dime_value;
	nickles = amount / nickle_value;
	pennies = amount % nickle_value;
	
	cout << "You can provide change for this amount as follows:" << endl;
	cout << "dollars: " << dollars << endl;
	cout << "quarters: " << quarters << endl;
	cout << "dimes: " << dimes << endl;
	cout << "nickles: " << nickles << endl;
	cout << "pennies: " << pennies << endl;
	
	return 0;
}