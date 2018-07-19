// Write a program to generate the product of the numbers in the range [1, 10)

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main(int argc, char **argv)
{
	const int MIN = 1;
	const int MAX = 10;

	// simple version...
	for ( int multiplier = MIN; multiplier != MAX; ++multiplier )
	{
		for ( int multiplicand = 1; multiplicand != 10; ++multiplicand )
		{
			cout << multiplier << " x " << multiplicand << " = " << multiplier * multiplicand << endl;
		}
	}

	return 0;
}
