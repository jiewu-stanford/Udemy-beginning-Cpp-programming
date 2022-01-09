#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void display_menu();
char get_selection ();
void display_vector(const vector<int> &v);
vector<int> add_element(vector<int> &v);
void calculate_mean(const vector<int> &v);
void find_smallest_element(const vector<int> &v);
void find_largest_element(const vector<int> &v);
void find_given_element(const vector<int> &v);

int main()
{
	vector <int> nums {};
	char selection {};
	
	do {
		display_menu();
		selection = get_selection();
		
		switch (selection) {
			case 'P': {
				display_vector(nums);
				break;
			}
			case 'A': {
				nums = add_element(nums);
				break;
			}
			case 'Q': {
				cout << "Goodbye..." << endl;
				break;
			}
			case 'M': {
				calculate_mean(nums);
				break;
			}
			case 'S': {
				find_smallest_element(nums);
				break;
			}
			case 'L': {
				find_largest_element(nums);
				break;
			}
			case 'F': {
				 find_given_element(nums);
				 break;
			}
			default: cout << "Unknown selection. Please try again." << endl;
		}
	} while (selection!='Q');
	
	return 0;
}

void display_menu()
{
	cout << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number"  << endl;
	cout << "F - Find a given number" << endl;
	cout << "Q - Quit" << endl << endl;
}

char get_selection ()
{
	char selection {};
	cout << "Enter your choice: ";
	cin >> selection;
	return toupper(selection);
}

void display_vector(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "[] - the list is empty" << endl;
	else {
		cout << "[ ";
		for (auto val: v) {
			cout << val << " ";
		}
		cout << "]" << endl;
	}
}

vector<int> add_element(vector<int> &v)
{
	int new_num {};
	cout << "Enter an integer to add to the list: ";
	cin >> new_num;
	v.push_back(new_num);
	cout << new_num << " added" << endl;
	return v;
}

void calculate_mean(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "Empty list. No mean can be calculated." << endl;
	else {
		int total {};
		double num_mean {};
		for (auto val: v)
			total += val;
		num_mean = static_cast<double>(total)/v.size();
		cout << fixed << setprecision(1);
		cout << "The mean is: " << num_mean << endl;
	}
}

void find_smallest_element(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "Empty list. No smallest number can be found." << endl;
	else {
		int smallest {v.at(0)};
		for (auto val: v) {
			if (val <= smallest)
				smallest = val;
		}
		cout << "The smallest number is: " << smallest << endl;
	}
}

void find_largest_element(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "Empty list. No largest number can be found." << endl;
	else {
		int largest {v.at(0)};
		for (auto val: v) {
			if (val >= largest)
				largest = val;
		}
		cout << "The largest number is: " << largest << endl;
	}
}

void find_given_element(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "Empty list. No number can be found." << endl;
	else {
		int target {};
		cout << "Enter an integer to search through the list: ";
		cin >> target;
		bool found_element {false};
		for (auto val: v) {
			if (val == target)
				found_element = true;
		}
		if (found_element == true)
			cout << "The target " << target << " was found in the list." << endl;
		else
			cout << "The target " << target << " was not found in the list." << endl;
	}
}