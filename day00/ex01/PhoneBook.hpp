#pragma once

#include <iostream>
#include <iomanip>

#include "Contact.hpp"


class PhoneBook
{
private:
	Contact	contacts[8];
	int		size;
	int		id_for_add;

public:
	PhoneBook();

	void	addContact(Contact contact);
	void	outContact(void);
	bool	outId(int id);
	static	int convertToInt(std::string num);
	void	print_head(bool full_head=true);
};