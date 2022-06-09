#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
	this->id_for_add = 0;
}

void	PhoneBook::addContact(Contact contact)
{
	if (id_for_add == 8)
		id_for_add = 0;
	this->contacts[id_for_add] = contact;
	id_for_add++;
	if (size == 8)
		return ;
	size++;
}

void	PhoneBook::outContact(void)
{
	this->print_head(false);
	for (int i = 0; i < this->size; i++)
	{
		std::cout.width(10);
		std::cout << std::setw(10) << contacts[i].getId()	<< " | " <<
		std::setw(10) << contacts[i].getFirstName() 		<< " | " <<
		std::setw(10) << contacts[i].getLastName()			<< " | " <<
		std::setw(10) << contacts[i].getNickName() << std::endl;
	}
}

bool	PhoneBook::outId(int id)
{
	int	id_int = id - 1;
	if (id < 1 || id > 8 || id > this->size)
		return (false);
	this->print_head();
	std::cout << std::setw(10) << contacts[id_int].getId() 		<< " | " <<
			std::setw(10) << contacts[id_int].getFirstName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getLastName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getNickName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getNumberPhone() 	<< " | " <<
			std::setw(10) << contacts[id_int].getSecret() 		<< std::endl;
	return (true);
}

int	PhoneBook::convertToInt(std::string num)
{

	int		i;
	int		sign;
	int		nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (num[i] == '\0')
		return (0);
	while (num[i] == '\t' || num[i] == '\v' || num[i] == '\n' || num[i] == '\r' \
		|| num[i] == '\f' || num[i] == ' ')
		i++;
	if (num[i] == '-' || num[i] == '+')
		if (num[i++] == '-')
			sign = -1;
	while (num[i] >= '0' && num[i] <= '9')
		nbr = (nbr * 10) + (num[i++] - 48);
	return (nbr * sign);
}

void	PhoneBook::print_head(bool full_head)
{
	if (full_head)
	{
		std::cout << std::setw(10) << "ID" << " | " <<
		std::setw(10) << "First name" 	   << " | " <<
		std::setw(10) << "Last name" 	   << " | " <<
		std::setw(10) << "Nick"			   << " | " <<
		std::setw(10) << "Number" 		   << " | " <<
		std::setw(10) << "Secret" 		<< std::endl;
	}
	else
	{
		std::cout << std::setw(10) << "ID" << " | " <<
		std::setw(10) << "First name" 	   << " | " <<
		std::setw(10) << "Last name" 	   << " | " <<
		std::setw(10) << "Nick"			   << std::endl;
	}
}