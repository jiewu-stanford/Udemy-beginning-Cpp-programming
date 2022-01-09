#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
	cout << boolalpha << endl;
	Mystring a {"Bayern"};
	Mystring b {"Munich"};
	
	cout << "------------- Comparison -------------" << endl;
	cout << a << " == " << b << ": " << (a==b) << endl;
	cout << a << " < " << b << ": " << (a<b) << endl;
	
	cout << "------------- Negation -------------" << endl;
	cout << "-(" << a << ")" << ": " << (-a) << endl;
	
	cout << "------------- Addition -------------" << endl;
	cout << a << " + " << b << ": " << (a+b) << endl;
	cout << a << " + space + " << b << ": " << (a+" "+b) << endl;
	Mystring c = a;
	c += b;
	cout << a << " += " << b << ": " << c << endl;
	
	cout << "------------- Multiplication -------------" << endl;
	cout << a << "*3: " << (a*3) << endl;
	Mystring d = a;
	d *= 3;
	cout << a << "*=3: " << d << endl;
	
	cout << "------------- Increment -------------" << endl;
	Mystring e;
	e = ++a;
	cout << "res = ++Bayern gives res: " << e << " and Bayern: " << a << endl;
	e = b++;
	cout << "res = Munich++ gives res: " << e << " and Bayern: " << b << endl;
	
	return 0;
}