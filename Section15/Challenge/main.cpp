#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
	cout.precision(2);
	cout << fixed;
	
	cout << "\n################## ACCOUNTS ##################" << endl;
	vector<Account> accounts;
	accounts.push_back(Account {});
	accounts.push_back(Account {"Bayern"});
	accounts.push_back(Account {"Munich",6000});
	accounts.push_back(Account {"Champion",10000});
	
	display(accounts);
	deposit(accounts,1000);
	withdraw(accounts,3000);
	
	
	cout << "\n################## SAVINGS ACCOUNTS ##################" << endl;
	vector<Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account {});
	sav_accounts.push_back(Savings_Account {"Golden"});
	sav_accounts.push_back(Savings_Account {"State",3000});
	sav_accounts.push_back(Savings_Account {"Warriors",5000,5.0});
	
	display(sav_accounts);
	deposit(sav_accounts,1000);
	withdraw(sav_accounts,3000);
	
	
	cout << "\n################## CHECKING ACCOUNTS ##################" << endl;
	vector<Checking_Account> check_accounts;
	check_accounts.push_back(Checking_Account {});
	check_accounts.push_back(Checking_Account {"Stanford"});
	check_accounts.push_back(Checking_Account {"University",6000});
	check_accounts.push_back(Checking_Account {"Business",10000});
	
	display(check_accounts);
	deposit(check_accounts,1000);
	withdraw(check_accounts,3000);
	
	
	cout << "\n################## TRUST ACCOUNTS ##################" << endl;
	vector<Trust_Account> trust_accounts;
	trust_accounts.push_back(Trust_Account {});
	trust_accounts.push_back(Trust_Account {"Caltech"});
	trust_accounts.push_back(Trust_Account {"Institute",3000});
	trust_accounts.push_back(Trust_Account {"Science",5000,5.0});
	
	display(trust_accounts);
	deposit(trust_accounts,1000);
	withdraw(trust_accounts,1000);
	
	for (int ii=0; ii<5; ii++)
		withdraw(trust_accounts,100);
	
	
	return 0;
}