#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	_value = fixed._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return *this;
	_value = fixed._value;
	std::cout << "Copy assigment operator called called" << std::endl;
	return *this;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member fucntion called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member fucntion called" << std::endl;
	this->_value = raw;
}
