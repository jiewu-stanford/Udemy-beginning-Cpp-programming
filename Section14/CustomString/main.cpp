#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
	Mystring empty;
	Mystring bayern {"Bayern"};
	Mystring munich {bayern};
	
	empty.display();
	bayern.display();
	munich.display();
	cout << "-----------------------------------------" << endl;
	
	Mystring a {"Hello"};
	Mystring b;
	b = a;						// b.operator=(a);
	b = "This is a test.";		// b.operator={"This is a test."};
	b = Mystring{"Bonjour"};
	cout << "-----------------------------------------" << endl;
	
	return 0;
}