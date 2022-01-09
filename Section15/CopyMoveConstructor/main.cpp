#include <iostream>

using namespace std;

class Base {
private:
	int value;
public:
	Base(): value{0} {cout << "Base no-args constructor" << endl;}
	Base(int x): value{x} {cout << "Base (int) overloaded constructor" << endl;}
	~Base() {cout << "Base destructor" << endl;}
	
	Base(const Base &other) : value{other.value} {cout << "Base copy constructor" << endl;}
	Base &operator=(const Base &rhs) {
		cout << "Base overloaded operator =" << endl;
		if (this==&rhs)
			return *this;
		value = rhs.value;
		return *this;
	}
};


class Derived : public Base {
private:
	int doubled_value;
public:
	Derived(): Base{}, doubled_value{1} {cout << "Derived no-args constructor" << endl;}
	Derived(int x): Base{x}, doubled_value{x*2} {cout << "Derived (int) overloaded constructor" << endl;}
	~Derived() {cout << "Derived destructor" << endl;}
	
	Derived(const Derived &other) : Base{other}, doubled_value{other.doubled_value} {
		cout << "Derived copy constructor" << endl;
	}
	Derived &operator=(const Derived &rhs) {
		cout << "Derived overloaded operator =" << endl;
		if (this==&rhs)				// check self-assignment
			return *this;
		Base::operator=(rhs);		// Base overloaded operator
		doubled_value = rhs.doubled_value;
		return *this;
	}
};


int main()
{
//	Base b1 {100};
//	Base b2 {b1};
//	b1 = b2;
	
	Derived d1 {200};
	Derived d2 {d1};		// copy constructor
	cout << "------------------------------------" << endl;
	d1 = d2;				// copy assignment
	
	return 0;
}