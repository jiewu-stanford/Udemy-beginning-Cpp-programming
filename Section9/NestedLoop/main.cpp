#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int grid[5][3] {};
	for (int row{0}; row<5; ++row) {
		for (int col{0}; col<3; ++col) {
			grid[row][col] = 1000;
		}
	}
	
	for (int row{0}; row<5; ++row) {
		for (int col{0}; col<3; ++col) {
			cout << grid[row][col] << " ";
		}
		cout << endl;
	}
	
	vector < vector<int> > vector_2d {
		{1,2,3},
		{10,20,30,40},
		{100,200,300,400,500}
	};
	for (auto vec: vector_2d) {
		for (auto val: vec) {
			cout << val << " ";
		}
		cout << endl;
	}
	
	for (int num1{1}; num1 < 5; ++num1) {
		for (int num2{1}; num2 < 4; ++num2) {
			cout << num1 << " X " << num2 << " = " << (num1*num2) << endl;
		}
		cout << "--------------------------" << endl;
	}
	
	int num_items{};
	cout << "How many data items do you have? ";
	cin >> num_items;
	vector <int> data {};
	for (int ii{1}; ii <= num_items; ++ii) {
		int data_item{};
		cout << "Enter data item " << ii << ":";
		cin >> data_item;
		data.push_back(data_item);
	}
	
	cout << "\nDisplaying histogram" << endl;
	for (auto val: data) {
		for (int jj{1}; jj<=val; ++jj) {
			if (jj % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}
	
	return 0;
}