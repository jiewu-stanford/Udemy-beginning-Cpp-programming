#include <iostream>
#include <memory>

class Base {
public:
	void say_hello() const {
		std::cout << "Hello, I'm a Base class object" << std::endl;
	}
};


class Derived : public Base {
public:
	void say_hello() const {
		std::cout << "Hello, I'm a Derived class object" << std::endl;
	}
};


void greetings(const Base &obj) {
	std::cout << "Greetings: ";
	obj.say_hello();
}


int main()
{
	Base base;
	base.say_hello();
	
	Derived derived;
	derived.say_hello();
	
	std::cout << "------------------------------------------" << std::endl;
	
	greetings(base);
	greetings(derived);
	
	std::cout << "------------------------------------------" << std::endl;
	
	Base *base_ptr = new Derived();
	base_ptr->say_hello();
	delete base_ptr;
	
	std::unique_ptr<Base> smart_ptr = std::make_unique<Derived>();
	smart_ptr->say_hello();
}