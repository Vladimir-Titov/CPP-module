#pragma once

#include <iostream>
#include "Contact.hpp"

using namespace	std;

class Contact;

class PhoneBook
{
private:
	Contact	contacts[8];
	int		size;
public:
	void	addContact(Contact contact);
	void	outContact(void);
};