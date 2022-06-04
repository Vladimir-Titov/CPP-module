#pragma once
#include <string>
#include "PhoneBook.hpp"

using namespace	std;

class Contact
{
private:
	int			id;
	string		firstName;
	string		lastName;
	string		nickName;
	string		numberPhone;
	string		secret;
public:
	Contact();
	Contact(string info[]);

	int		getId();
	string	getFirstName();
	string	getLastName();
	string	getNickName();
	string	getNumberPhone();
	string	getSecret();
};