#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
	Mystring bayern {"Bayern"};
	Mystring munich {"Munich"};
	Mystring club;
	
	cout << "Enter the third club name: ";
	cin >> club;
	cout << "The complete club name is: " << bayern << " " << munich << " " << club << endl;
	
	cout << "\nEnter three names separated by space: ";
	cin >> bayern >> munich >> club;
	cout << "The complete club name is: " << bayern << " " << munich << " " << club << endl;
	
	return 0;
}