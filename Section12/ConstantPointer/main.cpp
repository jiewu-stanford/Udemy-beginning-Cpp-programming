#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_int (int *double_ptr);
void swap (int *a, int *b);
void display (const vector<string> *const v);
void display (const int *array_ptr, const int sentinel);
void display_array (const int *const array_ptr, const size_t size);	// compiler cannot distinguish int vs. size_t, thus have to rename it
int *larger_int(int *ptr1, int*ptr2);
int *create_array (size_t size, int init_val);

int main()
{
	int num {10};
	cout << "Value before doubling is " << num << endl;
	double_int(&num);
	cout << "Value after doubling is " << num << endl;
	cout << num << endl;
	cout << "--------------------------------------" << endl;
	
	
	int x {100}, y {200};
	cout << "x = " << x << " and y = " << y << endl;
	swap(&x, &y);
	cout << "x = " << x << " and y = " << y << endl;
	cout << "--------------------------------------" << endl;
	
	
	vector <string> nations {"China", "Canada", "US"};
	display(&nations);
	cout << endl;
//	display_name(nations); gives compiler error, 
//  
	cout << "unlike array variables (see below), vector variables are not pointers (they are objects)" << endl;
	int scores [] {100,96,99,-1};
	display(scores,-1);
	cout << "--------------------------------------" << endl;
	
	
	
	int a{100}, b{200};
	int *larger_ptr {nullptr};
	larger_ptr = larger_int(&a, &b);
	cout << *larger_ptr << endl;
	cout << "--------------------------------------" << endl;
	
	
	int *my_array {}, array_size {5};
	my_array = create_array(array_size, 10);
	display_array(my_array, array_size);
	delete [] my_array;
	cout << "--------------------------------------" << endl;
	
	return 0;
}

void double_int (int *double_ptr)
{
	*double_ptr*=2;
}

void swap (int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void display (const vector<string> *const v)
{
	for (auto s: *v)
		cout << s << " ";
	cout << endl;
}

void display (const int *array_ptr, const int sentinel)
{
	while (*array_ptr != sentinel)
		cout << *array_ptr++ << endl;
	cout << endl;
}

void display_array (const int *const array_ptr, const size_t size)
{
	for (size_t	ii{0}; ii<size; ++ii)
//		cout << *(array_ptr+ii) << endl;
		cout << array_ptr[ii] << " ";
	cout << endl;
}

int *larger_int(int *ptr1, int*ptr2)
{
	if (*ptr1 > *ptr2)
		return ptr1;
	else
		return ptr2;
}

int *create_array (size_t size, int init_val=0)
{
	int *new_storage {nullptr};
	new_storage = new int [size];
	for (size_t	ii{0}; ii < size; ++ii)
		*(new_storage + ii) = init_val;
	return new_storage;
}