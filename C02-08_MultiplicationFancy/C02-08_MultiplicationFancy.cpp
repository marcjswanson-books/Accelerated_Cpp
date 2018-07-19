// Write a program to generate the Product Table

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::string;
using std::setw;

int main(int argc, char **argv)
{
	const int MIN = 1;
	const int MAX = 10;

	unsigned maxProduct = (MAX - 1) * (MAX - 1);
	const unsigned MAX_DIGITS = maxProduct > 0 ? (int) log10 ((double) maxProduct) + 1 : 1;  // thank you internet!
	const string space( MAX_DIGITS, ' ');

	// build table header
	cout << "  " << space;
	for ( int header = MIN; header < MAX; ++header )
	{
		cout << "   " << setw(MAX_DIGITS) << header;
	}
	cout << endl;

	string seperator( (MAX-1) * (MAX_DIGITS + 3), '-');
	seperator = "   " + space + seperator + '-';

	cout << seperator << endl;

	// fill in table
	for ( int multiplier = MIN; multiplier != MAX; ++multiplier )
	{
		cout << "  " << setw(MAX_DIGITS) << multiplier << " | ";

		for ( int multiplicand = MIN; multiplicand != MAX; ++multiplicand )
		{
			cout << setw(MAX_DIGITS) << multiplier * multiplicand << " | ";
		}

		cout << endl;
	}

	cout << seperator << endl;


	return 0;
}
