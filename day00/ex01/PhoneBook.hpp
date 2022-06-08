#pragma once

#include <iostream>
#include <iomanip>

#include "Contact.hpp"


class PhoneBook
{
private:
	Contact	contacts[8];
	int		size;

public:
	PhoneBook();

	void	addContact(Contact contact);
	void	outContact(void);
	bool	outId(int id);
};