#include <iostream>

using namespace std;

int main ()
{
	string Nickname, CYL, School;
	cout << "Nickname : ";
	cin >> Nickname;
	cout << "Course - Year Level : ";
	cin >> CYL;
	cout << "School : ";
	cin >> School;
	cout << "Wow congrats " << Nickname << "! " << CYL << " is a nice course. And you are studying in " << School << " which is one of the Center of Exellence in Tertiary Education." <<endl;
	
	return 0;
}
