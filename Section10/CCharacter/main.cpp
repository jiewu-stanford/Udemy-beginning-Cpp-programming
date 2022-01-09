#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
//	char name [80];
//	strcpy(name, "Bayern");
//	cout << name << endl;
//	strcat(name, " Munich");
//	cout << name << endl;
//	cout << strlen(name) << endl;
//	cout << strcmp(name, "Science") << endl;
//	
//	
	char first_name [20] {}, last_name [20] {}, full_name [50] {}, tmp [50] {};
//	cout << "Please enter your first name: ";
//	cin >> first_name;
//	cout << "Please enter your last name: ";
//	cin >> last_name;
//	cout << "Your first name has " << strlen(first_name) << " characters." << endl;
//	cout << "Your last name has " << strlen(last_name) << " characters." << endl;
//	
//	strcpy(full_name, first_name);
//	strcat(full_name, " ");
//	strcat(full_name, last_name);
//	cout << "Your full name is: " << full_name << endl;
	
	
	cout << "Enter your full name: ";
	cin.getline(full_name, 50);
	strcpy(tmp, full_name);
	if (strcmp(tmp, full_name) == 0)
		cout << tmp << " and " << full_name << " are the same." << endl;
	else
		cout << tmp << " and " << full_name << " are different." << endl;
		
	for (size_t ii{0}; ii < strlen(full_name); ++ii) {
		if (isalpha(full_name[ii]))
			full_name[ii] = toupper(full_name[ii]);
	}
	cout << "Your full name is " << full_name << endl;
	if (strcmp(tmp, full_name) == 0)
		cout << tmp << " and " << full_name << " are the same." << endl;
	else
		cout << tmp << " and " << full_name << " are different." << endl;
	cout << "Result of comparing " << tmp << " and " << full_name << ": " << strcmp(tmp,full_name) << endl;
	cout << "Result of comparing " << full_name << " and " << tmp << ": " << strcmp(full_name,tmp) << endl;
	
	return 0;
}