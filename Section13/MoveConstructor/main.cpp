#include <iostream>
#include <vector>

using namespace std;

//---------------------------------------------
// define move constructor
//---------------------------------------------
class Move {
private:
	int *data;
public:
	void set_value(int d) {*data = d;}
	int get_value() {return *data;}
	Move(int d);						// constructor
	Move(const Move &source);			// copy constructor
	Move(Move &&source) noexcept;		// move constructor
	~Move();							// destructor
};
Move::Move(int d)
{
	data = new int; *data = d;
	cout << "Constructor for: " << d << endl;
}
Move::Move(const Move &source) : Move {*source.data}
{
	cout << "Copy constructor - deeop copy for: " << *data << endl;
}
Move::Move(Move &&source) noexcept: data{source.data}
{
	source.data = nullptr;
	cout << "Move constructor - moving pointer for: " << *data << endl;
}
Move::~Move()
{
	if (data != nullptr)
		cout << "Destructor freeing data for: " << *data << endl;
	else
		cout << "Destructor freeing data for nullptr." << endl;
	delete data;
}

//---------------------------------------------
// define display function
//---------------------------------------------
//void display_deep(Deep s)
//{
//	cout << s.get_value() << endl;
//}
//void display_shallow(Shallow s)
//{
//	cout << s.get_value() << endl;
//}


int main()
{
	vector<Move> vec;
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});
	vec.push_back(Move{70});
	vec.push_back(Move{80});
	
	return 0;
}