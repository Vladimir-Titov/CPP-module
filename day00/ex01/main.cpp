#include <iostream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

// static bool isDigit(char c)
// {
// 	if (c >= '0' && c <= '9')
// 		return true;
// 	return false;
// }

int main()
{
	PhoneBook	phonebook;
	int			id = 1;
	for (int exit = 0; exit != 1;)
	{
		std::string	command;
		std::cout << "You can use these command: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> command; 
		if (command == "ADD" || command == "add")
		{
			std::string	info[5];
			std::cout << "Enter first name: " ;
			std::cin >> info[0];
			std::cout << "Enter last name: " ;
			std::cin >> info[1];
			std::cout << "Enter nick: " ;
			std::cin >> info[2];
			std::cout << "Enter phone number: " ;
			std::cin >> info[3];
			std::cout << "Enter secret: " ;
			std::cin >> info[4];
			phonebook.addContact(Contact(info, id));
			id++;
			if (id == 9)
				id = 1;
		}
		if (command == "SEARCH" || command == "search")
		{
			std::string	id;
			phonebook.outContact();
			std::cout << "Enter id: " << std::endl;
			std::cin >> id;
			std::cin.ignore(256, '\n');
			if (!phonebook.outId(PhoneBook::convertToInt(id)))
				std::cout << "Wrong id!" << std::endl;
		}
		if (command == "EXIT" || command == "exit")
			exit = 1;
	}
}