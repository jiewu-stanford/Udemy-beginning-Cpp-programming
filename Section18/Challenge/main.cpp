#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main()
{
	try {
		std::unique_ptr<Checking_Account> bayern_acc = std::make_unique<Checking_Account>("Bayern",-10.0);
		// note: cannot create unique pointer for abstract class Account
		std::cout << *bayern_acc << std::endl;
	}
	catch (const IllegalBalanceException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	try {
		std::unique_ptr<Savings_Account> munich_acc = std::make_unique<Savings_Account>("Munich",1000,1);
		std::cout << *munich_acc << std::endl;
		munich_acc->withdraw(500);
		std::cout << *munich_acc << std::endl;
		munich_acc->withdraw(1000);
		std::cout << *munich_acc << std::endl;
	}
	catch (const IllegalBalanceException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (const InsufficientFundsException &ex) {
		std:: cerr << ex.what() << std::endl;
	}
	std::cout << "\nAccount processing completed." << std::endl;
	
	return 0;
}