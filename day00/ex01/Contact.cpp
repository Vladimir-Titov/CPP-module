#include "Contact.hpp"

Contact::Contact(std::string info[]) 
{
	this->firstName = info[0];
	this->lastName = info[1];
	this->nickName = info[2];
	this->numberPhone = info[3];
	this->secret = info[4];
	if (Contact::id_generator == 8)
		Contact::id_generator = 1;
	this->id = Contact::id_generator++;
}

int	Contact::getId()
{
	return (this->id);
}

std::string	Contact::getFirstName()
{
	if (this->firstName.size() >= 10)
		return (this->firstName.substr(0, 9).append("."));
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	if (this->lastName.size() >= 10)
		return (this->lastName.substr(0, 9).append("."));
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	if (this->nickName.size() >= 10)
		return (this->nickName.substr(0,9).append("."));
	return (this->nickName);
}

std::string	Contact::getNumberPhone()
{
	if (this->numberPhone.size() >= 10)
		return (this->numberPhone.substr(0, 9).append("."));
	return (this->numberPhone);
}

std::string	Contact::getSecret()
{
	if (this->secret.size() >= 10)
		return (this->secret.substr(0, 9).append("."));
	return (this->secret);
}


