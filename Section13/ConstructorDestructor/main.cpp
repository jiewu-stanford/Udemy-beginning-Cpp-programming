#include <iostream>
#include <string>
#include <vector>

//using namespace std;

class Player {
private:
	std::string name;
	int health;
	int experience;
public:
	void set_name(std::string n) {name = n;}
//	std::string get_name() {return name;}
	std::string get_name() const {return name;}
	// overloaded constructor
	// ----------  initialization list  ----------
//	Player() : name{"Noname"}, health{100}, experience{3} {
//		std::cout << "No args constructor used for: " << name << std::endl;
//	}
//	Player(std::string n): name{n}, health{100}, experience{3} {
//		std::cout << "Named constructor used for: " << name << std::endl;
//	}
	// ---------------  delegation  --------------
//	Player() : Player{"Noname",100,0} {
//		std::cout << "No args constructor used for: " << name << std::endl;
//	}
//	Player(std::string n): Player {n,100,0} {
//		std::cout << "Named constructor used for: " << name << std::endl;
//	}
	// -------------  default value  -------------
	Player(std::string n="Noname", int h=100, int e=0): name{n}, health{h}, experience{e} {
		std::cout << "Full args constructor used for: " << name << std::endl;
	}
	// destructor
	~Player() {
		std::cout << "Destructor used for: " << name << std::endl;
	}
};


void display_player_name(const Player &p)
{
	std::cout << p.get_name() << std::endl;
}


int main()
{
	{
		Player slayer;
//		slayer.set_name("Slayer");
		std::cout << slayer.get_name() << " created" << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	
	{
		Player hero {"Hero"};
		std::cout << hero.get_name() << " created" << std::endl;
		Player bayern {"Bayern",100,10};
		std::cout << bayern.get_name() << " created" << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	
	Player *enemy = new Player;
	enemy->set_name("Enemy");
	
	Player *boss {nullptr};
	boss = new Player ("Boss", 1000, 100);
	
	const Player *master = new Player ("Master", 10000);
//	master->set_name("Master");			// not allowed for const Player
	std::cout << master->get_name() << std::endl;
	display_player_name(*master);
	
	delete enemy;
	delete boss;
	delete master;
	
	return 0;
}