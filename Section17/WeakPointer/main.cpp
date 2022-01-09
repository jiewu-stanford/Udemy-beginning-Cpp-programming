#include <iostream>
#include <memory>

using namespace std;

class B;

class A {
	std::shared_ptr<B> b_ptr;
public:
	void set_point_to_B(std::shared_ptr<B> &b) {b_ptr=b;}
	A() {cout << "A Constructor" << endl;}
	~A() {cout << "A Destructor" << endl;}
};

class B {
//	std::shared_ptr<A> a_ptr;
	std::weak_ptr<A> a_ptr;			// make weak to break circular reference
public:
	void set_point_to_A(std::shared_ptr<A> &a) {a_ptr=a;}
	B() {cout << "B Constructor" << endl;}
	~B() {cout << "B Destructor" << endl;}
};

int main()
{
	shared_ptr<A> a = make_shared<A> ();
	shared_ptr<B> b = make_shared<B> ();
	a->set_point_to_B(b);
	b->set_point_to_A(a);
	
	return 0;
}