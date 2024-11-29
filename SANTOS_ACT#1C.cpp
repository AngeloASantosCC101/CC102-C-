#include <iostream>

using namespace std;

int main ()
{
	int x = 8;
	for (int i = x; i > 0; i--) {
		for (int j = 0; j < x -i; j++) {
			cout << " ";
		} 
		for (int j = 0; j < i; j++) {
			cout << "#";
		}
		cout <<endl;
	}
	return 0;
}
