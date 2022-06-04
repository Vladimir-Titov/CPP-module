#include "Contact.hpp"

Contact::Contact(string info[]) 
{
	this->firstName = info[0];
	this->lastName = info[1];
	this->nickName = info[2];
	this->numberPhone = info[3];
	this->secret = info[4];
	this->id = 0;
}

int	Contact::getId()
{
	return (this->id);
}

string	Contact::getFirstName()
{
	return (this->firstName);
}

string	Contact::getLastName()
{
	return (this->lastName);
}

string	Contact::getNickName()
{
	return (this->nickName);
}

string	Contact::getNumberPhone()
{
	return (this->numberPhone);
}

string	Contact::getSecret()
{
	return (this->secret);
}


