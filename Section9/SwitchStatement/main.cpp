#include <iostream>

using namespace std;

int main()
{
	char grade {};
	cout << "Enter the letter grade you expect on the exam:";
	cin >> grade;
	
	switch (grade) {
		case 'a':
		case 'A':
			cout << "You need a raw score of 90 or above." << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need a raw score between 80 and 89." << endl;
			break;
		case 'c':
		case 'C':
			cout << "You need a raw score between 70 and 79." << endl;
			break;
		case 'd':
		case 'D':
			cout << "You need a raw score between 60 and 69." << endl;
			break;
		case 'f':
		case 'F': {
			char confirm {};
			cout << "Are you sure you want a F grade (Y/N)?";
			cin >> confirm;
			if (confirm == 'y' || confirm == 'Y')
				cout << "You need to pass this course to get the degree." << endl;
			else if (confirm == 'n' || confirm == 'N')
				cout << "Restart and enter the grade you expect again." << endl;
			else
				cout << confirm << " is an illegal response." << endl;
			break;
		}
		default:
			cout << grade << " is an invalid grade." << endl;
	}
	cout << endl << endl;
	
	
	
	enum Direction {
		left, right, up, down
	};
	Direction heading {left};
	
	switch (heading) {
		case left:
			cout << "Going left" << endl;
			break;
		case right:
			cout << "Going right" << endl;
			break;
		case up:
			cout << "Going up" << endl;
			break;
		case down:
			cout << "Going down" << endl;
			break;
		default:
			cout << "Error! Invalid value!" << endl;
	}
	
	return 0;
}