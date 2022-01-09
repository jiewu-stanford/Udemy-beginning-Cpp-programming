#include <iostream>
#include <vector>

class Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Account::withdraw" << std::endl;
	}
	virtual ~Account() {std::cout << "Account::destructor" << std::endl;}
};

class Checking : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Checking::withdraw" << std::endl;
	}
	virtual ~Checking() {std::cout << "Checking::destructor" << std::endl;}
};

class Savings : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Savings::withdraw" << std::endl;
	}
	virtual ~Savings() {std::cout << "Savings::destructor" << std::endl;}
};

class Trust : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Trust::withdraw" << std::endl;
	}
	virtual ~Trust() {std::cout << "Trust::destructor" << std::endl;}
};


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