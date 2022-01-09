#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account: public Account
{
	friend std::ostream &operator<<(std::ostream &os,const Checking_Account &account);
private:
	static constexpr const char *default_name="Unnamed Checking Account";
	static constexpr double default_balance=0.0;
	static constexpr double per_check_fee=1.5;
public:
	Checking_Account(std::string name=default_name,double balance=default_balance);
//	bool deposit(double amount);		// inherit deposit method from Account
	bool withdraw(double amount);
};

#endif // CHECKING_ACCOUNT_H
