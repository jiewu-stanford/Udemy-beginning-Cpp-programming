#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num {};
	const int min_n {10}, max_n {100};
	
	cout << "Enter a number between " << min_n << " and " << max_n << ":";
	cin >> num;
	
	if (num > min_n) {
		cout << num << " is greater than " << min_n << endl;
		int diff {num-min_n};
		cout << num << " is " << diff << " greater than " << min_n << endl;
	}
	
	if (num < max_n) {
		cout << num << " is smaller than " << max_n << endl;
		int diff {max_n-num};
		cout << num << " is " << diff << " smaller than " << max_n << endl;
	}
	
	if (num>=min_n && num <=max_n) {
		cout << num << " is between " << min_n << " and " << max_n << endl;
	}
	
	if (num==min_n || num==max_n) {
		if (num==min_n)
			cout << num << " hits the lower bound " << min_n << endl;
		else
			cout << num << " hits the upper bound " << max_n << endl;
	}
	cout << endl << endl;
	
	
	
	int score {};
	char grade {};
	cout << "Enter the raw score:";
	cin >> score;
	
	if (score < 0 || score > 100)
		cout << score << " is an invalid score!" << endl;
	else {
		if (score >= 90)
			grade = 'A';
		else if (score >= 80)
			grade = 'B';
		else if (score >= 70)
			grade = 'C';
		else if (score >= 60)
			grade = 'D';
		else
			grade = 'F';
		cout << "The grade is " << grade << endl;
		
		if (grade == 'F')
			cout << "Sorry you failed." << endl;
		else
			cout << "Congratulations! You passed!" << endl;
	}
	cout << endl << endl;
	
	
	
	int length {}, width {}, height {};
	double base_cost {2.50};
	const int tier_1_threshold {100}, tier_2_threshold {200};
	const int max_dim_length {10};
	double tier_1_surcharge {0.10}, tier_2_surcharge {0.25};
	int package_volume {};
	
	cout << "Enter the length, width, and height of the package separated by space:";
	cin >> length >> width >> height;
	if (length > max_dim_length || width > max_dim_length || height > max_dim_length)
		cout << "Dimension exceeded the limit of " << max_dim_length << " inches. Sorry we cannot ship it." << endl;
	else {
		package_volume = length * width * height;
		cout << "The volume of the package is: " << package_volume << endl;
		
		double package_cost {};
		package_cost = base_cost;
		
		if (package_volume > tier_2_threshold) {
			package_cost += package_cost * tier_2_surcharge;
			cout << "Adding tier 2 surcharge " << tier_2_surcharge*100 << "%" << endl;
		}
		else if (package_volume > tier_1_threshold) {
			package_cost += package_cost * tier_1_surcharge;
			cout << "Adding tier 1 surcharge " << tier_1_surcharge*100 << "%" << endl;
		}
		cout << fixed << setprecision(2);
		cout << "The package costs $" << package_cost << " to ship." << endl;
	}
	return 0;
}