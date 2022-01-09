#include <iostream>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name,double balance,double int_rate) 
	: Savings_Account{name,balance,int_rate},num_withdrawals{0} {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_threshold)
		amount += bonus_amount;
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (amount > balance*max_withdrawal_percent || num_withdrawals >= max_withdrawals)
		return false;
	else {
		++num_withdrawals;
//		return Savings_Account::withdraw(amount);
		return Account::withdraw(amount);			// Savings_Account withdraw inherited from Account
	}
}

std::ostream &operator<<(std::ostream &os,const Trust_Account &account) {
	os << "[Trust Account: " << account.name << ", Balance: " << account.balance 
	   << ", Interest rate: " << account.int_rate << "%, Withdrawals: " << account.num_withdrawals << "]";
	return os;
}