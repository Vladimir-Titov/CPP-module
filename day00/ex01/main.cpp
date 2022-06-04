#include <iostream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

static bool	isEmptyInput(string input)
{
	if (input == "" || input.size() == 0)
	{
		cout << "Not valid input!" << endl;
		return (true);
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		if (input[i] != ' ')
			return (false);
		continue;
	}
	cout << "Not valid input!" << endl;
	return (true);
}

int main()
{
	PhoneBook	phonebook;
	for (int exit = 0; exit != 1;)
	{
		string	command;
		cout << "You can use these command: ADD, SEARCH, EXIT" << endl;
		getline(cin, command);
		if (command == "ADD")
		{
			string	info[5];
			cout << "Enter first name: " ;
			getline(cin, info[0]);
			if (isEmptyInput(info[0]))
				break ;
			cout << "Enter last name: " ;
			getline(cin, info[1]);
			if (isEmptyInput(info[1]))
				break ;
			cout << "Enter nick: " ;
			getline(cin, info[2]);
			if (isEmptyInput(info[2]))
				break ;
			cout << "Enter phone number: " ;
			getline(cin, info[3]);
			if (isEmptyInput(info[3]))
				break ;
			cout << "Enter secret: " ;
			getline(cin, info[4]);
			if (isEmptyInput(info[4]))
				break ;
			phonebook.addContact(Contact(info));
		}
		if (command == "SEARCH")
		{
			string	id;
			cout << "Enter id: " << endl;
			getline(cin, id);
			phonebook.outContact();
		}
	}
}