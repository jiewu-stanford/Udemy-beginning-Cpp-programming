#include "Player.h"

int Player::num_players {0};

Player::Player(std::string n,int h,int e): name{n},health{h},experience{e} {
	++num_players;
}

Player::Player(const Player &source) : Player {source.name,source.health,source.experience} {
}

Player::~Player() {
	--num_players;
}

int Player::get_num_players()
{
	return num_players;
}