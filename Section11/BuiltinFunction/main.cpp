#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

const double pi {3.1415926};

int add_positive_numbers(int a, int b);
double disk_area (double radius);
double cylinder_volume (double radius, double height);
void say_hello(string name);

int main()
{
	cout << sqrt(4) << endl;
	cout << pow(2,3) << endl;
	
	int random_number {};
	size_t count {10};
	int min {1}, max {10};
	
	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));
//	srand(0);
	for (size_t ii{1}; ii<=count; ++ii) {
		random_number = rand() % max + min;
		cout << random_number << endl;
	}
	
	
	double r {}, h {};
	cout << "Enter the radius and height of the cylinder (separated by space): ";
	cin >> r >> h;
	cout << "The volume of a cylinder with radius " << r << " and height " << h << " is " << cylinder_volume(r,h) << endl;
	
	
	say_hello("Bayern");
	
	
	return 0;
}


double disk_area (double radius) {
	return pi*radius*radius;
}


double cylinder_volume (double radius, double height) {
	return disk_area(radius)*height;
}


int add_positive_numbers(int a, int b)
{
	if (a < 0 || b < 0)
		return 0;
	else
		return a + b;
}


void say_hello(string name) {
	cout << "Hello " + name << endl;
}