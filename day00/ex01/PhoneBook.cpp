#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
}

void	PhoneBook::addContact(Contact contact)
{
	this->contacts[size] = contact;
	size++;
	if (size == 8)
		size = 0;
}

void	PhoneBook::outContact(void)
{
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
	std::cout << std::setw(10) << contacts[id_int].getId() 		<< " | " <<
			std::setw(10) << contacts[id_int].getFirstName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getLastName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getNickName() 	<< " | " <<
			std::setw(10) << contacts[id_int].getNumberPhone() 	<< " | " <<
			std::setw(10) << contacts[id_int].getSecret() 		<< std::endl;
	return (true);
}