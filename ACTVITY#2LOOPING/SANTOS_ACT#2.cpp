#include <iostream>
using namespace std;
int main() {
   
    char symbol1, symbol2, symbol3;
    cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
    cin >> symbol1;
    cout << "Enter 2nd symbol to use (*, ^, $, @): ";
    cin >> symbol2;
    cout << "Enter 3rd symbol to use (*, $, @): ";
    cin >> symbol3;

    cout << "\nYou picked: " << symbol1 << " " << symbol2 << " " << symbol3 << "\n";

//F
    cout << "\nf:\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			cout << " " << symbol1;
		}
		cout << " ";
		for (int j = i + 1; j < 8; j++) {
			cout << " " << symbol1;
		}
		cout << endl;
	}
	//G
    cout << "\ng:\n";
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            cout << "  ";
        }
        for (int j = 0; j < 7; j++) {
            cout << symbol2 << " ";
        }
        cout << endl;
    }
	//H
    cout << "\nh:\n";
    for (int i = 0; i <= 6; i++) {
      for (int j = 0; j < i; j++) {
         cout << " " <<symbol1;
      }
      cout << " " <<symbol2 << endl;
   }
   for (int i = 6; i >= 0; i--) {
      for (int j = 0; j < i; j++) {
         cout << " " <<symbol1;
		}
        cout << " " <<symbol2 << endl;
   }

    return 0;
}