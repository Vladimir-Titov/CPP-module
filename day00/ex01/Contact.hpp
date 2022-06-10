#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	int				id;
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		numberPhone;
	std::string		secret;
public:
	Contact() {};
	Contact(std::string info[], int id);

	int			getId();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getNumberPhone();
	std::string	getSecret();
};


#endif