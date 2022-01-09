#include <iostream>
#include "Account_Util.h"

// Utility helper functions for Account class

void display(const std::vector<Account *> &accounts) {
	std::cout << "\n------------- Account Information -------------" << std::endl;
	for (const auto acc: accounts)
		std::cout << *acc << std::endl;
}

void deposit(std::vector<Account *> &accounts,double amount) {
	std::cout << "\n------------- Depositing to Accounts -------------" << std::endl;
	for (auto acc: accounts) {
		if (acc->deposit(amount))
			std::cout << "Deposited " << amount << " to " << *acc << std::endl;
		else
			std::cout << "Failed to deposit " << amount << " to " << *acc << std::endl;
	}
}

void withdraw(std::vector<Account *> &accounts,double amount) {
	std::cout << "\n------------- Withdrawing from Accounts -------------" << std::endl;
	for (auto acc: accounts) {
		if (acc->withdraw(amount))
			std::cout << "Withdrew " << amount << " to " << *acc << std::endl;
		else
			std::cout << "Failed to withdraw " << amount << " to " << *acc << std::endl;
	}
}