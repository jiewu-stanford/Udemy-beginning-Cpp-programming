#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
	cout << boolalpha << endl;
	
	Mystring bayern {"Bayern"};
	Mystring munich {"Munich"};
	Mystring team = bayern;
	cout << (bayern==munich) << endl;
	cout << (bayern==team) << endl;
	cout << "-------------------------------------" << endl;
	
	bayern.display();
	bayern = -bayern;
	bayern.display();
	cout << "-------------------------------------" << endl;
	
	Mystring club = bayern + " " + "Munich";
//	Mystring clubname = bayern + munich;
	club.display();
	
	Mystring reputation = bayern + " " + munich + " " + "Champion";
	reputation.display();
	
	return 0;
}