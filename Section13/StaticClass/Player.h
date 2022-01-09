#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
private:
	static int num_players;
	std::string name;
	int health;
	int experience;
public:
	std::string get_name() const {return name;}
	int get_health() const {return health;}
	int get_experience() const {return experience;}
	
	Player(std::string n="Noname",int h=100,int e=0);
	Player(const Player &source);
	~Player();
	
	static int get_num_players();
	
};

#endif // PLAYER_H
