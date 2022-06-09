#include <iostream>
#include <string>

int main(void) 
{
	std::string someString = "HI THIS IS BRAIN";
	std::string *stringPTR = &someString;
	std::string &stringREF = someString;

	std::cout << "adress someString is " << &someString << std::endl;
	std::cout << "adress stringPTR is " << stringPTR << std::endl;
	std::cout << "adress stringREF is " << &stringREF << std::endl;

	std::cout << "value stringPTR is " << *stringPTR << std::endl;
	std::cout << "value stringREF is " << stringREF << std::endl;
	return 0;
}