#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	// ask for the person's name
	std::cout << "Please enter your first name: ";

	// read the name
	std::string name;
	std::cin >> name;

	// write a greeting
	std::cout << "\nHello, " << name << "!" << std::endl;

	return 0;
}
