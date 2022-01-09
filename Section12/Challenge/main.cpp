#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display_array(const int *const array_ptr, const size_t size);
int *outer_product(const int *const array1_ptr, const size_t size1, const int *const array2_ptr, const size_t size2);

int main()
{
	int array1 [] {1,2,3,4,5};
	int array2 [] {10,20,30};
	int *array_prod {nullptr};
	size_t size1 {}, size2 {};
	
	size1 = sizeof(array1)/sizeof(array1[0]);
	size2 = sizeof(array2)/sizeof(array2[0]);
	
	cout << "Array 1: ";
	display_array(array1, size1);
	cout << "Array 2: ";
	display_array(array2, size2);
	
	cout << "Outer product: ";
	array_prod = outer_product(array1, size1, array2, size2);
	display_array(array_prod, size1*size2);
	delete [] array_prod;
	
	return 0;
}

void display_array(const int *const array_ptr, const size_t size)
{
	cout << "[ ";
	for (size_t ii{0}; ii<size; ++ii)
		cout << *(array_ptr+ii) << " ";
	cout << "]" << endl;
}

int *outer_product(const int *const array1_ptr, const size_t size1, const int *const array2_ptr, const size_t size2)
{
	int *prod_storage {nullptr};
	prod_storage = new int [size1*size2];
	for (size_t ii{0}; ii < size2; ++ii) {
		for (size_t jj{0}; jj < size1; ++jj) {
			*(prod_storage + size1*ii + jj) = *(array2_ptr+ii) * *(array1_ptr+jj);
		}
	}
	return prod_storage;
}