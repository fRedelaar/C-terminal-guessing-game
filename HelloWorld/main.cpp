#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int theNumber;
	int ui;
	bool flag = false;

	theNumber = rand() % 100 + 1;

	cout << theNumber;

	cout << "Enter a number please :-) " << endl;
	cin >> ui;

	while (flag == false)
	{
		if (ui > theNumber)
		{
			cout << "Try again. The number is smaller." << endl;
			cin >> ui;
		}
		if (ui < theNumber)
		{
			cout << "Try again. The number is bigger." << endl;
			cin >> ui;
		}
		if (ui == theNumber)
		{
			cout << "Congratulations! You have won!" << endl;
			flag = true;
		}
}
	return 0;
}