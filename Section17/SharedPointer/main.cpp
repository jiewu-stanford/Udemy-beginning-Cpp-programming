#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

class Test {
private:
	int data;
public:
	Test(): data{0} {std::cout<< "Test constructor (" << data << ")" << std::endl;}
	Test(int data): data{data} {std::cout<< "Test constructor (" << data << ")" << std::endl;}
	int get_data() const {return data;}
	~Test() {std::cout<< "Test destructor (" << data << ")" << std::endl;}
};


void func(std::shared_ptr<Test> p) {
	std::cout << "Use count: " << p.use_count() << std::endl;
}


int main()
{
	std::cout << "-------------- Use Count Example --------------" << std::endl;
//	std::shared_ptr<int> p1 {new int {100}};
//	std::cout << "Use count of p1: " << p1.use_count() << std::endl;
//	std::shared_ptr<int> p2 {p1};
//	std::cout << "Use count of p1: " << p1.use_count() << std::endl;
//	std::cout << "Use count of p2: " << p2.use_count() << std::endl;
//	p1.reset();
//	std::cout << "Use count of p1: " << p1.use_count() << std::endl;
//	std::cout << "Use count of p2: " << p2.use_count() << std::endl;
	
	std::shared_ptr<Test>ptr = std::make_shared<Test>(100);
	std::cout << "Passing to function would make a copy......" << std::endl;
	func(ptr);
	std::cout << "Copy destroyed after executing the function......" << std::endl;
	std::cout << "Use count: " << ptr.use_count() << std::endl;
	
	std::cout << std::endl << std::endl;
	{
		std::shared_ptr<Test> ptr1 = ptr;		// can copy
		std::cout << "Use count of ptr: " << ptr.use_count() << std::endl;
		{
			std::shared_ptr<Test> ptr2 = ptr;
			std::cout << "Use count of ptr: " << ptr1.use_count() << std::endl;
			ptr.reset();
			std::cout << "Reset would nullify use count......" << std::endl;
			std::cout << "Use count of ptr: " << ptr.use_count() << std::endl;
		}
		std::cout << "Exiting block would destroy copies......" << std::endl;
		std::cout << "Use count of ptr1: " << ptr1.use_count() << std::endl;
	}
	
	
	std::cout << "-------------- Pointer Vector --------------" << std::endl;
	{
		std::cout << "Make temporary copy while pushing back to vector......" << std::endl;
		std::vector<std::shared_ptr<Account>> accounts;
		accounts.push_back(std::make_shared<Checking_Account>("Bayern",10000));
		accounts.push_back(std::make_shared<Savings_Account>("Caltech",20000,1.0));
		accounts.push_back(std::make_shared<Trust_Account>("Stanford",30000,0.5));
		
//		for (auto acc: accounts)			// produce use count = 2
		for (const auto &acc: accounts)		// produce use count = 1
		{
			std::cout << *acc << std::endl;
			std::cout << "Use count: " << acc.use_count() << std::endl;
		}
	}
	
	{
		std::cout << "\nDeclared and then push back to vector......" << std::endl;
		std::shared_ptr<Account> acc1 = std::make_shared<Checking_Account>("Bayern",10000);
		std::shared_ptr<Account> acc2 = std::make_shared<Savings_Account>("Caltech",20000,1.0);
		std::shared_ptr<Account> acc3 = std::make_shared<Trust_Account>("Stanford",30000,0.5);
		
		std::vector<std::shared_ptr<Account>> accounts;
		accounts.push_back(acc1);
		accounts.push_back(acc2);
		accounts.push_back(acc3);
		
		for (auto acc: accounts)			// produce use count = 3
//		for (const auto &acc: accounts)		// produce use count = 2
		{
			std::cout << *acc << std::endl;
			std::cout << "Use count: " << acc.use_count() << std::endl;
		}
	}
	
	
	return 0;
}