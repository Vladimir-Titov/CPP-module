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

Fixed::Fixed(int value)
{
	this->_value = value << Fixed::_fraction;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value)
{
	this->_value = roundf(value * (1 << Fixed::_fraction));
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &fixed)
		return *this;
	_value = fixed._value;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
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

float Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / static_cast<float>(1 << Fixed::_fraction);
}

int Fixed::toInt(void) const
{
	return this->_value / (1 << Fixed::_fraction);
}
