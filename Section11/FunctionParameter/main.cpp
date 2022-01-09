#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void print_array(const int numbers [], size_t size);
void print_array(const double numbers [], size_t size);
void swap(int &a, int &b);
void print_vector_by_value(const vector<int> v);
void print_vector_by_reference(const vector<int> &v);
void clear_vector(vector<int> &v);

double total_cost (double base_cost, double tax_rate=0.06, double shipping=3.50);

int main()
{
	// default parameter
	cout << fixed << setprecision(2);
	cout << total_cost(100) << endl;
	cout << total_cost(100,0.08) << endl;
	cout << total_cost(100,0.08,4) << endl;
	cout << "------------------------------" << endl;
	
	
	// overloading
	int nums [] {1,2,3,4,5};
	print_array(nums, 5);
	cout << "------------------------------" << endl;
	
	double doubles [] {1.1,2.2,3.3};
	print_array(doubles, 3);
	cout << "------------------------------" << endl;
	
	
	// pass by reference
	int x{10}, y{20};
	cout << x << " " << y << endl;
	swap(x, y);
	cout << x << " " << y << endl;
	cout << "------------------------------" << endl;
	
	vector<int> data {1,2,3,4,5};
	cout << "Print vector by passing value..." << endl;
	print_vector_by_value(data);
	cout << "Print vector by passing reference..." << endl;
	print_vector_by_reference(data);
	cout << "Clear vector by reference..." << endl;
	clear_vector(data);
	cout << "Print vector by passing value..." << endl;
	print_vector_by_value(data);
	
	return 0;
}

double total_cost (double base_cost, double tax_rate, double shipping) {
	return base_cost += base_cost * tax_rate + shipping;
}

void print_array(const int numbers [], size_t size) {
	for (size_t ii{0}; ii<size; ++ii)
		cout << numbers[ii] << endl;
}

void print_array(const double numbers [], size_t size) {
	for (size_t ii{0}; ii<size; ++ii)
		cout << numbers[ii] << endl;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void print_vector_by_value(const vector<int> v) {
	for (auto val: v)
		cout << val << endl;
}

void print_vector_by_reference(const vector<int> &v) {
	for (auto val: v)
		cout << val << endl;
}

void clear_vector(vector<int> &v) {
	v.clear();
}