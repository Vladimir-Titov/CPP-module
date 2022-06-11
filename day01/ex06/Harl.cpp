#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::info()
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning()
{
	std::cout << "WARNING!" << std::endl;
}

void Harl::error()
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	void		(Harl::*func[4])(void);
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;


	int index = 0;
	for (; levels[index] != level && index < 4; index++){}

	switch (index)
	{
	case 3:
		(this->*func[3])();
		break;
	case 2:
		(this->*func[2])();
		(this->*func[3])();
		break;
	case 1:
		(this->*func[1])();
		(this->*func[2])();
		(this->*func[3])();
		break;
	case 0:
		(this->*func[0])();
		(this->*func[1])();
		(this->*func[2])();
		(this->*func[3])();
		break;
	default:
		std::cout << "Invalid input!" << std::endl;
		break;
	}
}
