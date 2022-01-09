#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int *score_ptr {nullptr};
	score_ptr = new int;
	cout << score_ptr << endl;
	cout << *score_ptr << endl;
	delete score_ptr;
	cout << "--------------------------------" << endl;
	
	
	double *temp_ptr {nullptr};
	size_t size {};
	cout << "How many temperatures to store? ";
	cin >> size;
	temp_ptr = new double [size];
	delete [] temp_ptr;
	cout << "--------------------------------" << endl;
	
	
	int scores [] {100,96,99};
	cout << "Value of array variable: " << scores << endl;
	cout << "Dereferenced array variable points to the value of the array's first element: " << *scores << endl;
	int *scores_ptr {scores};
	cout << "Value of array pointer is the same as value of array variable: " << scores_ptr << endl;
	cout << "Value of array pointer offset by one element: " << scores_ptr + 1 << endl;
	cout << "Dereferenced array pointer points to the value of the array's first element: " << *scores_ptr << endl;
	cout << "Dereferenced array pointer offset by one element points to the value of the array's second element: " << *(scores_ptr + 1) << endl;
	cout << "--------------------------------" << endl;
	
	
	cout << "\nArray variable subscript notation" << endl;
	cout << scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;
	cout << "and array variable offset notation" << endl;
	cout << *scores << endl;
	cout << *(scores + 1) << endl;
	cout << *(scores + 2) << endl;
	cout << "are equivalent." << endl;
	
	cout << "\nArray pointer subscript notation." << endl;
	cout << scores_ptr[0] << endl;
	cout << scores_ptr[1] << endl;
	cout << scores_ptr[2] << endl;
	cout << "and array pointer offset notation" << endl;
	cout << *scores_ptr << endl;
	cout << *(scores_ptr + 1) << endl;
	cout << *(scores_ptr + 2) << endl;
	cout << "are equivalent." << endl;
	
	
	vector<int> ratings {4,3,5};
	cout << "Unlike array variables, vector variables are not pointers." << endl;
//	cout << *ratings << endl;	// ERROR
//	int *rating_ptr {&ratings};	// ERROR
	
	return 0;
}