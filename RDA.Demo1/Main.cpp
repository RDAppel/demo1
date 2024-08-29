
#include <iostream> // cin & cout
#include <conio.h> // lets us use getch

using namespace std;

int main()
{
	//cout << "\"Hello\nworld.\"\n\nEnter an integer: ";

	//int age = 41;
	//float balance = 1534.27f;
	//const double PI = 3.14159265;
	//bool ryanIsCool = false;
	//char middleInitial = 'D';
	////string s = "Ryan"; // not a primitive!!!!!!

	//int a = (int)PI; // explicit cast (implicit would be without (int))

	//int input = 0;
	//cin >> input;
	//cout << "You entered: " << input << "\n";

	//if (input)
	//{
	//	cout << "Your number is over 3!";
	//}

	int input = 0;
	cout << "Enter a number between 1 and 5: ";
	cin >> input;

	if (input < 1 || input > 5) cout << "Error!";
	else
	{
		for (int i = 0; i < input; i++)
		{
			cout << (i + 1) << ". If I'm not back in five minutes, just wait longer.\n";
		}

		cout << " - Ace Ventura\n";
	}

	(void)_getch(); // wait for any key
	return 0;
}
