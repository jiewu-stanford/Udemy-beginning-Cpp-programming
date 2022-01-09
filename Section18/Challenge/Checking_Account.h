#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account: public Account
{
private:
	static constexpr const char *default_name="Unnamed Checking Account";
	static constexpr double default_balance=0.0;
	static constexpr double per_check_fee=1.5;
public:
	Checking_Account(std::string name=default_name,double balance=default_balance);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual void print(std::ostream &os) const override;
	virtual ~Checking_Account() = default;
};

#endif // CHECKING_ACCOUNT_H
