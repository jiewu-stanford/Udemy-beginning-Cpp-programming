#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

class Account {
private:
	// attributes
	std::string name {"Customer"};
	double balance {0.0};
public:
	// methods
	void set_balance (double amount) {balance = amount;}
	double get_balance () {return balance;}
	void set_name (std::string n) {name = n;}
	std::string get_name () {return name;}
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // _ACCOUNT_H