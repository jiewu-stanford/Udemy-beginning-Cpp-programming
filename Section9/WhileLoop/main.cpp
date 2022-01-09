#include <iostream>

using namespace std;

int main()
{
	int ii {1};
	while (ii < 11) {
		if (ii % 2 == 0)
			cout << ii << endl;
		++ii;
	}
	cout << endl << endl;
	
	
	
	int num {};
	cout << "While loop version:" << endl;
	cout << "Enter an integer between 1 and 10: ";
	cin >> num;
	while (num < 1 || num > 10) {
		cout << "Try again! Please enter an integer between 1 and 10: ";
		cin >> num;
	}
	cout << "You've entered " << num << endl;
	
	num = 0;
	cout << "Pseudo do-while loop version:" << endl;
	bool done {false};
	while (!done) {
		cout << "Enter an integer between 1 and 10: ";
		cin >> num;
		if (num < 1 || num > 10)
			cout << "Out of range! Try again!" << endl;
		else {
			cout << "You've entered " << num << endl;
			done = true;
		}
	}
	
	num = 0;
	cout << "Do-while loop version:" << endl;
	do {
		cout << "Enter an integer between 1 and 10: ";
		cin >> num;
	} while (num < 1 || num > 10);
	cout << "You've entered " << num << endl;
	
	
	
	char selection {};
	do {
		double width {}, height {};
		cout << "Enter width and height separated by a space:";
		cin >> width >> height;
		
		double area {width * height};
		cout << "The are is " << area << endl;
		
		cout << "Calculate another? (Y/N): ";
		cin >> selection;
	} while (selection == 'Y' || selection == 'y');
	cout << endl << endl;
	
	
	
	int pc_ordered {};
	do {
		cout << "1. order 1 piece" << endl;
		cout << "2. order 2 pieces" << endl;
		cout << "3. order 3 pieces" << endl;
		cout << "Q. quit" << endl;
		cout << "Enter your selection: ";
		cin >> selection;
		
		switch (selection) {
			case '1': {
				pc_ordered = 1;
				cout << "1-piece order placed" << endl;
				break;
			}
			case '2': {
				pc_ordered = 2;
				cout << "2-piece order placed" << endl;
				break;
			}
			case '3': {
				pc_ordered = 3;
				cout << "3-piece order placed" << endl;
				break;
			}
			case 'Q':
			case 'q': {
				cout << "See you next time." << endl;
				break;
			}
			default: cout << "Invalid selection. Please try again." << endl;
		}
	} while (selection != 'q' && selection != 'Q');
	
	return 0;
}
