#include <iostream>

using namespace std;

int main()
{
	//inches to feet conversion factor
	int inches, feet;
	const int in2feet = 12;
	cout << "Enter number in inches : ";
	cin >> inches;
	//Convert inches to feet and inches
	feet = inches / in2feet;
	inches = inches % in2feet;
	cout << "-----------------------------------------------\n";
	cout << feet << " feet | " << inches << " inches" <<endl;
	
	return 0;
}
