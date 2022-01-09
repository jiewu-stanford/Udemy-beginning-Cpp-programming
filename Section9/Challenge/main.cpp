#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	vector <int> nums {};
	char selection {};
	
	do {
		cout << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number"  << endl;
		cout << "Q - Quit" << endl << endl;
		
		cout << "Enter your choice: ";
		cin >> selection;
		
		switch (selection) {
			case 'p':
			case 'P': {
				if (nums.size() == 0)
					cout << "[] - the list is empty" << endl;
				else {
					cout << "[ ";
					for (auto val: nums) {
						cout << val << " ";
					}
					cout << "]" << endl;
				}
				break;
			}
			case 'a':
			case 'A': {
				int new_num {};
				cout << "Enter an integer to add to the list: ";
				cin >> new_num;
				nums.push_back(new_num);
				cout << new_num << " added" << endl; 
				break;
			}
			case 'q':
			case 'Q': {
				cout << "Goodbye..." << endl;
				break;
			}
			case 'm':
			case 'M': {
				if (nums.size() == 0)
					cout << "Empty list. No mean can be calculated." << endl;
				else {
					int total {};
					double num_mean {};
					for (auto val: nums)
						total += val;
					num_mean = static_cast<double>(total)/nums.size();
					cout << fixed << setprecision(1);
					cout << "The mean is: " << num_mean << endl;
				}
				break;
			}
			case 's':
			case 'S': {
				if (nums.size() == 0)
					cout << "Empty list. No smallest number can be found." << endl;
				else {
					int smallest {nums.at(0)};
					for (auto val: nums) {
						if (val <= smallest)
							smallest = val;
					}
					cout << "The smallest number is: " << smallest << endl;
				}
				break;
			}
			case 'l':
			case 'L': {
				if (nums.size() == 0)
					cout << "Empty list. No largest number can be found." << endl;
				else {
					int largest {nums.at(0)};
					for (auto val: nums) {
						if (val >= largest)
							largest = val;
					}
					cout << "The largest number is: " << largest << endl;
				}
				break;
			}
			default: cout << "Unknown selection. Please try again." << endl;
		}
	} while (selection!='q' && selection!='Q');
	
	return 0;
}