#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv)
{
	int first;
	int second;

	cout << "Enter first number: ";
	cin >> first;
	cout << first << endl;

	cout << "Enter second number: ";
	cin >> second;
	cout << second << endl;

	if ( first > second )
	{
		cout << first << " is greater than " << second << endl;
	}
	else if ( second > first )
	{
		cout << second << " is greater than " << first << endl;
	}
	else
	{
		cout << first << " is equal to " << second << endl;
	}

	return 0;
}
