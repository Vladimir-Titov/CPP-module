#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	"pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put"
				"enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for"
				"years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
