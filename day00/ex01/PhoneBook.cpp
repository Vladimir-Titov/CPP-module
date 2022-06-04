#include "PhoneBook.hpp"

void PhoneBook::addContact(Contact contact)
{
	this->contacts[size] = contact;
	size++;
	if (size == 8)
		size = 0;
}

void PhoneBook::outContact()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << contacts[i].getFirstName() << "| " ;
		cout << contacts[i].getLastName() << " | " ;
		cout << contacts[i].getNumberPhone() << endl;
	}
}