#include <iostream>
#include <vector>

class Account {
public:
	void withdraw(double amount) {
		std::cout << "In Account::withdraw" << std::endl;
	}
};

class Checking final : public Account {
public:
	void withdraw(double amount) {
		std::cout << "In Checking::withdraw" << std::endl;
	}
};

class Savings : public Account {
public:
	void withdraw(double amount) {
		std::cout << "In Savings::withdraw" << std::endl;
	}
};

class Trust final : public Account {
public:
	void withdraw(double amount) {
		std::cout << "In Trust::withdraw" << std::endl;
	}
};

void do_withdraw(Account &account,double amount) {
	account.withdraw(amount);
}

int main()
{
	std::cout << "\n---------------- pointer ----------------" << std::endl;
	Account *p1 = new Account();
	Account *p2 = new Savings();
	Account *p3 = new Checking();
	Account *p4 = new Trust();
	
	p1->withdraw(1000);
	p2->withdraw(1000);
	p3->withdraw(1000);
	p4->withdraw(1000);
	
	
	std::cout << "\n---------------- array ----------------" << std::endl;
	Account *array [] {p1,p2,p3,p4};
	for (auto ii=0; ii<4; ++ii)
		array[ii]->withdraw(1000);
		

	std::cout << "\n---------------- vector ----------------" << std::endl;
	std::vector<Account *>accounts {p1,p2,p3,p4};
	for (auto acc_ptr: accounts)
		acc_ptr->withdraw(1000);
		
		
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	
	
	return 0;
}