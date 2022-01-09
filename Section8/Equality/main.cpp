#include <iostream>

using namespace std;

int main()
{
	bool equal_int {false};
	bool not_equal_int {false};
	int i1 {}, i2 {};
	double i1_double {};
	
	cout << boolalpha;	// will display true/false instead of 1/0 for booleans
	
	cout << "Enter two integers separated by space: ";
	cin >> i1 >> i2;
	equal_int = (i1 == i2);
	not_equal_int = (i1 != i2);
	cout << "Compare integers (equal): " << equal_int << endl;
	cout << "Compare integers (not equal): " << not_equal_int << endl;
	i1_double = static_cast<double>(i1);
	cout << "An integer is always equal to its double form: " << (i1==i1_double) << endl;
	
	bool equal_char {false};
	bool not_equal_char {false};
	char c1 {}, c2{};
	cout << "Enter two characters separated by space: ";
	cin >> c1 >> c2;
	equal_char = (c1 == c2);
	not_equal_char = (c1 != c2);
	cout << "Compare characters (equal): " << equal_char << endl;
	cout << "Compare characters (not equal): " << not_equal_char << endl;
	
	return 0;
}