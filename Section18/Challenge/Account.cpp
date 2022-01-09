#include <iostream>
#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

Account::Account(std::string name,double balance) : name{name},balance{balance} {
	if (balance < 0.0)
		throw IllegalBalanceException();
}

bool Account::deposit(double amount) {
	if (amount < 0)
		return false;
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (balance < amount)
		throw InsufficientFundsException();
	balance -= amount;
	return true;
}

double Account::get_balance() const {return balance;}

void Account::print(std::ostream &os) const {
	os.precision(2);
	os << std::fixed;
	os << "[Account: " << name << ", Balance: " << balance << "]";
}