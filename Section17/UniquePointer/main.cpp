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


int main()
{
	std::cout << "-------------- Simple Example --------------" << std::endl;
//	Test *t1 = new Test(1000);
//	delete t1;
	
	std::unique_ptr<Test>t1 {new Test(100)};
	std::unique_ptr<Test>t2 = std::make_unique<Test>(200);
	std::unique_ptr<Test>t3;
//	t3 = t1;	// ERROR, cannot copy unique pointer
	t3 = std::move(t1);
	if (!t1)
		std::cout << "t1 is nullptr" << std::endl;
		
		
	std::cout << "-------------- With Polymorphism --------------" << std::endl;
	std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Bayern",5000);
	std::cout << *a1 << std::endl;
	a1->deposit(3000);
	std::cout << *a1 << std::endl;
	
	
	std::cout << "-------------- Pointer Vector --------------" << std::endl;
	std::vector<std::unique_ptr<Account>> accounts;
	accounts.push_back(std::make_unique<Checking_Account>("Bayern",10000));
	accounts.push_back(std::make_unique<Savings_Account>("Caltech",20000,1.0));
	accounts.push_back(std::make_unique<Trust_Account>("Stanford",30000,0.5));
	
//	for (const auto acc: accounts)			// ERROR because it makes copy of acc
	for (const auto &acc: accounts)
		std::cout << *acc << std::endl;
	
	
	return 0;
}