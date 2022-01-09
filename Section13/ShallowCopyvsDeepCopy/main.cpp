#include <iostream>

using namespace std;

//---------------------------------------------
// define shallow copy
//---------------------------------------------
class Shallow {
private:
	int *data;
public:
	void set_value(int d) {*data = d;}
	int get_value() {return *data;}
	Shallow(int d);						// constructor
	Shallow(const Shallow &source);	// copy constructor
	~Shallow();							// destructor
};
Shallow::Shallow(int d)
{
	data = new int; *data = d;
}
Shallow::Shallow(const Shallow &source) : data {source.data}
{
	cout << "Copy constructor - shallow copy." << endl;
}
Shallow::~Shallow()
{
	delete data;
	cout << "Destructor freeing shallow copy storage." << endl;
}


//---------------------------------------------
// define deep copy
//---------------------------------------------
class Deep {
private:
	int *data;
public:
	void set_value(int d) {*data = d;}
	int get_value() {return *data;}
	Deep(int d);					// constructor
	Deep(const Deep &source);		// copy constructor
	~Deep();						// destructor
};
Deep::Deep(int d)
{
	data = new int; *data = d;
}
Deep::Deep(const Deep &source): Deep{*source.data}
{
//	data = new int; *data = *source.data;	// identical to constructor, can use delegation
	cout << "Copy constructor - deep copy." << endl;
}
Deep::~Deep()
{
	delete data;
	cout << "Destructor freeing deep copy storage." << endl;
}


//---------------------------------------------
// define display function
//---------------------------------------------
void display_deep(Deep s)
{
	cout << s.get_value() << endl;
}
void display_shallow(Shallow s)
{
	cout << s.get_value() << endl;
}


int main()
{
	Deep deep_obj {100};
	display_deep(deep_obj);		// no ERROR
	cout << "-----------------------------------" << endl;
	
	cout << "Make a copy of the deep object......" << endl;
	Deep another_deep_obj {deep_obj};
	cout << "Double the value of the deep copy......" << endl;
	another_deep_obj.set_value(200);
	cout << "-----------------------------------" << endl;
	cout << "Value of the original deep object is: " << endl;
	display_deep(deep_obj);
	cout << "-----------------------------------" << endl;
	cout << "Value of the deep copy is: " << endl;
	display_deep(another_deep_obj);
	cout << "-----------------------------------" << endl;
	
	Shallow shallow_obj {100};
	display_shallow(shallow_obj);	// ERROR: pointer being freed was not allocated
	
	return 0;
}