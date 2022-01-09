#include <iostream>
#include <Account.h>
#include "Savings_Account.h"

using namespace std;

int main()
{
	cout << "\n------------- Account -------------" << endl;
	Account acc {1000.0};
	cout << acc << endl;
	acc.deposit(2000.0);
	cout << acc << endl;
	acc.withdraw(500.0);
	cout << acc << endl;
	acc.withdraw(5000.0);
	cout << acc << endl;
	cout << endl;
	
	
	cout << "\n------------- Savings Account -------------" << endl;
	Savings_Account savings_acc {1000.0,5.0};
	cout << savings_acc << endl;
	savings_acc.deposit(2000.0);
	cout << savings_acc << endl;
	savings_acc.withdraw(500.0);
	cout << savings_acc << endl;
	savings_acc.withdraw(5000.0);
	cout << savings_acc << endl;
	cout << endl;
	
	
	return 0;
}