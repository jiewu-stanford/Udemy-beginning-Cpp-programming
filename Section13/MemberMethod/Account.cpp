#include "Account.h"
#include <iostream>

bool Account::deposit(double amount)
{
	if (amount >= 0){
		balance += amount;
//		printf("Deposit completed.\n");
		std::cout << "Deposit completed." << std::endl;
		return true;
	}
	else {
		printf("Deposit amount should not be negative.\n");
		return false;
	}
}

bool Account::withdraw(double amount)
{
	if (balance >= amount) {
		balance -= amount;
		printf("Withdrawal completed.\n");
		return true;
	}
	else {
		printf("Insufficient fund to withdraw.\n");
		return false;
	}
}

