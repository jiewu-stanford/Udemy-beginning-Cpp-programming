#include <iostream>
#include "Player.h"

using namespace std;

void display_active_players()
{
	cout << "Active players: " << Player::get_num_players() << endl;
}

int main()
{
	display_active_players();
	
	cout << "Creating Player Hero..." << endl;
	Player hero {"Hero"};
	display_active_players();
	
	cout << "Creating Player Master..." << endl;
	Player *master = new Player();
	display_active_players();
	cout << "Deleting Player Master..." << endl;
	delete master;
	display_active_players();
	
	{
		cout << "Creating Player Bayern within block..." << endl;
		Player bayern {"Bayern"};
		display_active_players();
	}
	cout << "Exiting block..." << endl;
	display_active_players();
	
	return 0;
}