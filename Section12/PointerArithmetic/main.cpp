#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 {"Bayern"}, s2 {"Bayern"};
	string *p1 {&s1}, *p2 {&s2};
	
	cout << boolalpha;
	cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
	cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
	cout << "--------------------------------------" << endl;
	
	
	int scores [] {100,96,99,-1};
	int *score_ptr {scores};
	while (*score_ptr != -1) {
		cout << *score_ptr++ << endl;
	}
	cout << "--------------------------------------" << endl;
	
	
	char name[] {"Bayern"};
	char *cptr1 {nullptr}, *cptr2 {nullptr};
	cptr1 = &name[0];
	cptr2 = &name[3];
	cout << "In the string " << name << ", " << *cptr2 << " is " << (cptr2-cptr1) << "characters away from " << *cptr1 << endl;
	
	return 0;
}