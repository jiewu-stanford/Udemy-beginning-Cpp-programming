#include <iostream>

using namespace std;

int age {18}; // global variable

int main()
{
	int room_width {0};
	cout << "Enter the width of the room: ";
	cin >> room_width;
	
	int room_length {0};
	cout << "Enter the length of the room: ";
	cin >> room_length;
	
	cout << "The area of the room is " << room_width*room_length << endl;
	
	cout << age << endl;
	
	return 0;
}
