#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account bayern_account;
	bayern_account.set_name("Bayern's account");
	bayern_account.set_balance(5000.0);
	
	bayern_account.deposit(1000.0);
	bayern_account.withdraw(500.0);
	cout << "The balance of " << bayern_account.get_name() << " now is: " << bayern_account.get_balance() << endl;
	
	return 0;
}