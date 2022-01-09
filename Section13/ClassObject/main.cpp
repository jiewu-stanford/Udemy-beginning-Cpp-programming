#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
	// attributes
	string name {"Player"};
	int health {100};
	int experience {0};
public:
	// methods
	void talk(string msg) { 
		cout << name << " says: " << msg << endl;
	}
	bool is_live();
};


class Account {
private:
	// attributes
	string name {"Customer"};
	double balance {0.0};
public:
	// methods
	void set_balance (double amount) {balance = amount;}
	double get_balance () {return balance;}
	void set_name (string n) {name = n;}
	string get_name () {return name;}
	bool deposit(double amount);
	bool withdraw(double amount);
};


int main()
{
	Player bayern;
//	bayern.name = "Bayern";
//	bayern.health = 100;
//	bayern.experience = 12;
	bayern.talk("Hi there");
	
	Player munich;
	
	Player *enemy {nullptr};
	enemy = new Player;
//	(*enemy).name = "Enemy";
//	(*enemy).health = 100;
//	enemy->experience = 15;
	enemy->talk("I will eliminate you!");
	delete enemy;
	
	Player players[] {bayern,munich};
	vector<Player> v_players {bayern};
	v_players.push_back(munich);
	
	
	
	Account bayern_account;
	bayern_account.set_name("Bayern's account");
	bayern_account.set_balance(5000.0);
	
	bayern_account.deposit(1000.0);
	bayern_account.withdraw(500.0);
	cout << "The balance of " << bayern_account.get_name() << " now is: " << bayern_account.get_balance() << endl;
	
	Account munich_account;
	
	return 0;
}

bool Account::deposit(double amount)
{
	if (amount >= 0){
		balance += amount;
		cout << "Deposit completed." << endl;
		return true;
	}
	else {
		cout << "Deposit amount should not be negative." << endl;
		return false;
	}
}

bool Account::withdraw(double amount)
{
	if (balance >= amount) {
		balance -= amount;
		cout << "Withdrawal completed." << endl;
		return true;
	}
	else {
		cout << "Insufficient fund to withdraw." << endl;
		return false;
	}
}