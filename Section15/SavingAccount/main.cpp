#include <iostream>
#include <Account.h>
#include "Savings_Account.h"

using namespace std;

int main()
{
	cout << "\n------------- Account -------------" << endl;
	Account acc {};
	acc.deposit(2000.0);
	acc.withdraw(500.0);
	cout << endl;
	
	Account *acc_ptr {nullptr};
	acc_ptr = new Account();
	acc_ptr->deposit(10000.0);
	acc_ptr->withdraw(500.0);
	delete acc_ptr;
	
	
	cout << "\n------------- Savings Account -------------" << endl;
	Savings_Account savings_acc {};
	savings_acc.deposit(2000.0);
	savings_acc.withdraw(500.0);
	cout << endl;
	
	Savings_Account *savings_acc_ptr {nullptr};
	savings_acc_ptr = new Savings_Account();
	savings_acc_ptr->deposit(10000.0);
	savings_acc_ptr->withdraw(500.0);
	delete savings_acc_ptr;
	
	
	return 0;
}