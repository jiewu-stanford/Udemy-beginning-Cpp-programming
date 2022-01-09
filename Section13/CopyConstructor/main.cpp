#include <iostream>
#include <string>
#include <vector>

//---------------------------------------------
// define player class
//---------------------------------------------
class Player {
private:
	std::string name;
	int health;
	int experience;
public:
	std::string get_name() {return name;}
	int get_health() {return health;}
	int get_experience() {return experience;}
	// constructor with default value
	Player(std::string n="Noname", int h=100, int e=0);
	// copy constructor
	Player(const Player &source);
	// destructor
	~Player() {std::cout << "Destructor used for: " << name << std::endl;}
};

Player::Player(std::string n, int h, int e): name{n}, health{h}, experience{e} {
	std::cout << "Full args constructor used for: " << name << std::endl;
}

// ----------  initialization list  ----------
//Player::Player(const Player &source): name{source.name}, health{source.health}, experience{source.experience} {
//	std::cout << "Copy constructor for: " << source.name << std::endl;
//}
// ---------------  delegation  --------------
Player::Player(const Player &source): Player{source.name, source.health, source.experience} {
	std::cout << "Copy constructor for: " << source.name << std::endl;
}


//---------------------------------------------
// define functions
//---------------------------------------------
void display_player(Player p);


int main()
{	
	Player empty;
	display_player(empty);
	std::cout << "-------------------------------------" << std::endl;
	
	Player hero {"Hero",100,20};
	display_player(hero);
	std::cout << "-------------------------------------" << std::endl;
	
	Player newplayer {hero};
	display_player(newplayer);
	
	return 0;
}


void display_player(Player p)
{
	std::cout << "Name: " << p.get_name() << std::endl;
	std::cout << "Health: " << p.get_health() << std::endl;
	std::cout << "Experience: " << p.get_experience() << std::endl;
}