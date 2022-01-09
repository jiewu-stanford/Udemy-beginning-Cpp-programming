#include <iostream>
#include <vector>

class I_Printable {
	friend std::ostream &operator<< (std::ostream &os,const I_Printable &obj);
public:
	virtual void print(std::ostream &os) const = 0;
};
std::ostream &operator<<(std::ostream &os,const I_Printable &obj) {
	obj.print(os);
	return os;
}


class Account : public I_Printable {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Account::withdraw" << std::endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Account display";
	}
	virtual ~Account() {}
};


class Checking : public Account {
public:
	virtual void withdraw(double amount) override {
		std::cout << "In Checking::withdraw" << std::endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Checking display";
	}
	virtual ~Checking() {}
};


class Savings : public Account {
public:
	virtual void withdraw(double amount) override {
		std::cout << "In Savings::withdraw" << std::endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Savings display";
	}
	virtual ~Savings() {}
};


class Trust : public Account {
public:
	virtual void withdraw(double amount) override {
		std::cout << "In Trust::withdraw" << std::endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Trust display";
	}
	virtual ~Trust() {}
};


void print(const I_Printable &obj) {
	std::cout << obj << std::endl;
}


int main()
{
	Account a;
	std::cout << a << std::endl;
	
	Checking c;
	std::cout << c << std::endl;
	
	Savings s;
	std::cout << s << std::endl;
	
	Trust t;
	std::cout << t << std::endl;
	
	std::cout << "--------------------------------------" << std::endl;
	
	Account *p1 = new Account();
//	std::cout << *p1 << std::endl;
	print(*p1);
	
	Account *p2 = new Checking();
//	std::cout << *p2 << std::endl;
	print(*p2);
	
	Account *p3 = new Savings();
//	std::cout << *p3 << std::endl;
	print(*p3);
	
	Account *p4 = new Trust();
//	std::cout << *p4 << std::endl;
	print(*p4);
	
	return 0;
}