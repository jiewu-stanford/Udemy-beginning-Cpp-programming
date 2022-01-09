#include <iostream>
#include <vector>

class Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Account::withdraw" << std::endl;
	}
	virtual ~Account() {};
};

class Checking final : public Account {
public:
	virtual void withdraw(double amount) override final {
		std::cout << "In Checking::withdraw" << std::endl;
	}
	virtual ~Checking() {};
};

class Savings : public Account {
public:
	virtual void withdraw(double amount) override final {
		std::cout << "In Savings::withdraw" << std::endl;
	}
	virtual ~Savings() {};
};

class Trust final : public Account {
public:
	virtual void withdraw(double amount) override final {
		std::cout << "In Trust::withdraw" << std::endl;
	}
	virtual ~Trust() {};
};

void do_withdraw(Account &account,double amount) {
	account.withdraw(amount);
}

int main()
{
	Account a;
	Account &ref_a = a;
	ref_a.withdraw(1000);
	
	Trust t;
	Account &ref_t = t;
	ref_t.withdraw(1000);
	
	std::cout << "\n-------------------------------------" << std::endl;
	
	Account r1;
	Savings r2;
	Checking r3;
	Trust r4;
	
	do_withdraw(r1, 1000);
	do_withdraw(r2, 2000);
	do_withdraw(r3, 3000);
	do_withdraw(r4, 4000);
	
	return 0;
}