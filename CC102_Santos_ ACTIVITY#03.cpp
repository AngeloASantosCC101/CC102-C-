#include <iostream>

using namespace std;

int main()
{

	int age, money;
	char user, parent;
	
	cout << "Program that you can attend to." << endl;
	cout << "Enter your age: ";
	cin >> age;
	
	if ( age <= 13 ){
		cout << "Are you going to watch the movie with your parents [1: Yes, 2: No]: ";
		cin >> user;
	}
	if (user == '1'){
			cout << "You can watch the rated G, PG movies.";
			}
			else if ( user == '2') {
			cout << "You can watch the rated G movies.";
			}
	else if ( age == 13 && age < 16 ){
		cout << "Are you going to watch the movie with your parents [1: Yes, 2: No]: ";
	}
			if (parent == 1){
				cout <<"You can watch the rated G, PG, R movies.";
			}
			else if (parent == 2 ){
				cout << "You can watch the rated G, PG movies.";
			}
	else if (age > 16) {
		cout  << "You can watch the rated G, PG, R movies. ";
	}
	cout << "please insert your amount of money : ";
	cin >> money;
	if (money < 7.50) {
			cout << "not enough money for the Matinee and Evening movie." <<endl;
		} else if (money >= 7.50 && money <= 10.49) {
			cout << "You can enter the Matinee movie." <<endl;
		} else if (money >= 10.50) {
			cout << "You can enter both the Matinee and Evening movie." <<endl;
		}
	return 0;
} 