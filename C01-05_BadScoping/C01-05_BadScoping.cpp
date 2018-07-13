#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	{ std::string s = "a string";
	{ std::string x = s + ", really";
	std::cout << s << std::endl; // } //move bracket from here...
	std::cout << x << std::endl; } // ... to here - fixing scope of x
	}
	return 0;
}
