#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
	friend std::ostream &operator<<(std::ostream &os,const Trust_Account &account);
private:
	static constexpr const char *default_name="Unnamed Trust Account";
	static constexpr double default_balance=0.0;
	static constexpr double default_int_rate=0.0;
	static constexpr double bonus_amount=50.0;
	static constexpr double bonus_threshold=5000.0;
	static constexpr int max_withdrawals=3;
	static constexpr double max_withdrawal_percent=0.2;
protected:
	int num_withdrawals;
public:
	Trust_Account(std::string name=default_name,double balance=default_balance,double int_rate=default_int_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // TRUST_ACCOUNT_H
