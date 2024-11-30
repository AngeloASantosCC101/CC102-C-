#include <iostream>
using namespace std;

int main() {
    char symbol1, symbol2, symbol3;
    int rows;

    // Prompt the user for the first symbol
    cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
    cin >> symbol1;

    // Prompt the user for the second symbol
    cout << "Enter 2nd symbol to use (*, ^, #, $, @): ";
    cin >> symbol2;

    // Prompt the user for the third symbol
    cout << "Enter 3rd symbol to use (*, ^, #, $, @): ";
    cin >> symbol3;

    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    // Create a pattern using the three symbols
    cout << "Here is your pattern:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j % 3 == 1) {
                cout << symbol1 << " ";
            } else if (j % 3 == 2) {
                cout << symbol2 << " ";
            } else {
                cout << symbol3 << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
