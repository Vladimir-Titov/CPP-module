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

Fixed Fixed::operator--()
{
	--this->_value;;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(this->_value);

	--(*this);
	return (tmp);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return f1;
	return f2; 
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return f1;
	return f2; 
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return f1;
	return f2; 
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return f1;
	return f2; 
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(this->_value);

	++(*this);
	return (tmp);
}


Fixed Fixed::operator++()
{
	--this->_value;;
	return *this;
}

Fixed operator/(const Fixed &f1, const Fixed &f2)
{
	float res = f1.toFloat() / f2.toFloat();
	return Fixed(res);
}

Fixed operator*(const Fixed &f1, const Fixed &f2)
{
	float res = f1.toFloat() * f2.toFloat();
	return Fixed(res);
}

Fixed operator-(const Fixed &f1, const Fixed &f2)
{
	float res = f1.toFloat() - f2.toFloat();
	return Fixed(res);
}

Fixed operator+(const Fixed &f1, const Fixed &f2)
{
	float res = f1.toFloat() + f2.toFloat();
	return Fixed(res);
}


bool operator<=(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() <= f2.toFloat();
}

bool operator<(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() < f2.toFloat();
}

bool operator>=(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() >= f2.toFloat();
}

bool operator>(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() > f2.toFloat();
}

bool operator!=(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() != f2.toFloat();
}

bool operator==(const Fixed &f1, const Fixed &f2)
{
	return f1.toFloat() == f2.toFloat();
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
