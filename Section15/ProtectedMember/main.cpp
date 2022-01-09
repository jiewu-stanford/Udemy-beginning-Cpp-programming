#include <iostream>

using namespace std;

class Base {
public:
	int a{0};
	// member method has access to all, so are friends of Base
	void display() {std::cout<<a<<","<<b<<","<<c<<endl;}
protected:
	int b{0};
private:
	int c{0};
};


class Derived: public Base {
public:
	void access_base_members() {
		a = 100;	// OK because public
		b = 200;	// OK because derived class + protected
//		c = 300;	// ERROR because private
	}
};


int main()
{
	cout << "------ Base member access from base object ------" << endl;
	Base base;
	base.a = 100;
//	base.b = 200;	// ERROR because protected
//	base.c = 300;	// ERROR because private
	
	cout << "------ Base member access from derived object ------" << endl;
	Derived derived;
	derived.a = 200;
//	derived.b = 400;	// ERROR because object + protected
//	derived.c = 600;	// ERROR because private
	
	return 0;
}