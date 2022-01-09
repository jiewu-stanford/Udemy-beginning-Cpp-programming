#include <iostream>

using namespace std;

class Base {
private:
	int value;
public:
	Base(): value{0} {cout << "Base no-args constructor" << endl;}
	Base(int x): value{x} {cout << "Base (int) overloaded constructor" << endl;}
	~Base() {cout << "Base destructor" << endl;}
};


class Derived : public Base {
private:
	int doubled_value;
public:
//	Derived(): doubled_value{1} {cout << "Derived no-args constructor" << endl;}
	Derived(): Base{}, doubled_value{1} {cout << "Derived no-args constructor" << endl;}
//	Derived(int x): doubled_value{x*2} {cout << "Derived (int) overloaded constructor" << endl;}
	Derived(int x): Base{x}, doubled_value{x*2} {cout << "Derived (int) overloaded constructor" << endl;}
	~Derived() {cout << "Derived destructor" << endl;}
};


int main()
{
//	Base base;
//	Base base{100};

//	Derived derived;
	Derived derived {1000};
	
	return 0;
}