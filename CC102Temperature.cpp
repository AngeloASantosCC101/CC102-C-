#include <iostream>

using namespace std;

int main()
{
	int temp;
	cout << "What is the Temperature today? :";
	cin >> temp;
	if (temp < 32) {
		cout << "please bring a heavy jacket." <<endl;
	} else if (temp >= 32 && temp <= 50) {
		cout << "please bring a light jacket." <<endl;
	} else if (temp > 50) {
		cout << "please don't bring any jacket." <<endl;
	}
	return 0;
}
