#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main(int argc, char **argv)
{
	cout << "int: " << sizeof(int) << " bytes." << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "short: " << sizeof(short) << " bytes." << endl;
	cout << "long: " << sizeof(long) << " bytes." << endl;
	cout << "long long: " << sizeof(long long) << " bytes." << endl;
	cout << "float: " << sizeof(float) << " bytes." << endl;
	cout << "double: " << sizeof(double) << " bytes." << endl;
	cout << "long double: " << sizeof(long double) << " bytes." << endl;
	return 0;
}
