#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2 {"Bayern"};
	string s3 {s2};
	string s4 {"Bayern", 5};
	string s5 {s3, 2, 4};
	string s6 (4, 'A');
	
	cout << s1 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	
	
	string test_s;
	test_s = "juice";
	cout << ("nice " + ("cold " + test_s)) << endl;
//	cout << ("nice " + "cold " + test_s) << endl;	// this would give compiler error
	
	
	string first_name, last_name, full_name;
	first_name = "Bayern";
	last_name = "Munich";
	full_name = first_name + " " + last_name;
	cout << full_name << endl;
	
	
	for (size_t ii{0}; ii < full_name.length(); ++ii)
		cout << full_name.at(ii) << "-";
	cout << endl << "------------------------------" << endl;
	
	for (auto c: full_name)
		cout << c << endl;
	cout << "------------------------------" << endl;
		
	for (char c: full_name)
		cout << c << endl;
	cout << "------------------------------" << endl;
		
	for (int c: full_name)
		cout << c << endl;
	cout << "------------------------------" << endl;
	
	
	cout << full_name.length() << endl;
	cout << full_name.substr(0,6) << endl;
	cout << full_name.substr(7,6) << endl;
	cout << (full_name += " Champion!") << endl;
	cout << full_name.erase(6,7) << endl;
	cout << "Now the full name has " << full_name.length() << " characters." << endl;
	
	
	string ss {"Apple"};
	cout << ss.find('p') << endl;
	cout << ss.find("p") << endl;
	
	string word;
	word = "app";
//	word = "App";
	size_t position = ss.find(word);
	if (position != string::npos)
		cout << "Found " << word << " at position: " << position << endl;
	else
		cout << "Sorry, " << word << " not found" << endl;
	
	string your_name;
	cout << "Enter your full name (type in semicolon to end): " << endl;
	getline(cin, your_name, ';');
	cout << "Your name is " << your_name << endl;
	
	return 0;
}