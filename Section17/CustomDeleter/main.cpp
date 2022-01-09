#include <iostream>
#include <memory>

class Test {
private:
	int data;
public:
	Test(): data{0} {std::cout<< "Test constructor (" << data << ")" << std::endl;}
	Test(int data): data{data} {std::cout<< "Test constructor (" << data << ")" << std::endl;}
	int get_data() const {return data;}
	~Test() {std::cout<< "Test destructor (" << data << ")" << std::endl;}
};

void custom_deleter(Test *ptr) {
	std::cout << "Using function custom deleter......" << std::endl;
	delete ptr;
}

int main() {
	{
		std::cout << "--------------- Using Function ---------------" << std::endl;
		std::shared_ptr<Test> ptr1 {new Test{100}, custom_deleter};
	}
	
	{
		std::cout << "--------------- Using Lambda ---------------" << std::endl;
		std::shared_ptr<Test> ptr1 {new Test{200},
			[] (Test *ptr) {
				std::cout << "Using lambda custom deleter......" << std::endl;
				delete ptr;
			}
		};
	}
	
	return 0;
}