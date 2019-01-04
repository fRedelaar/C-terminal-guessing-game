#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	char name[20];
	cout << "Enter your name:";
	cin >> name;
	cout << "Hello " << name << "! \n";

	system("PAUSE");
	return EXIT_SUCCESS;
}