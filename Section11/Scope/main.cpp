#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n {100};

void global_example() {
	cout << "\nGlobal n is " << n << " at the start." << endl;
	n *= 2;
	cout << "Global n is now " << n << " at the end." << endl;
}

void static_local_example() {
	static int nn {600};
	cout << "\nLocal static nn is " << nn << " at the start." << endl;
	nn += 100;
	cout << "Local static nn is now " << nn << " at the end." << endl;
}

int main(int argc, char **argv)
{
	int num {100}, number {500};
	cout << "Local num is " << num << " in main." << endl;
	{
		int num {200};
		cout << "Local num is " << num << " in this block within main." << endl;
		cout << "Inner block in main can see the number " << number << " outside the block." << endl;
	}
	cout << "Local num is " << num << " in main." << endl;
	
	global_example();
	global_example();
	
	static_local_example();
	static_local_example();
	cout << endl;
	
	return 0;
}