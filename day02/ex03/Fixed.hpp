#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int	_fraction = 8;
	int					_value;
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	~Fixed();
	Fixed(const Fixed &fixed);

	Fixed&					operator=(const Fixed &fixed);
	friend	std::ostream&	operator<<(std::ostream &out, const Fixed &fix);
	friend	bool			operator==(const Fixed &f1, const Fixed &f2);
	friend	bool			operator!=(const Fixed &f1, const Fixed &f2);
	friend	bool			operator>(const Fixed &f1, const Fixed &f2);
	friend	bool			operator>=(const Fixed &f1, const Fixed &f2);
	friend	bool			operator<(const Fixed &f1, const Fixed &f2);
	friend	bool			operator<=(const Fixed &f1, const Fixed &f2);
	friend	Fixed			operator+(const Fixed &f1, const Fixed &f2);
	friend	Fixed			operator-(const Fixed &f1, const Fixed &f2);
	friend	Fixed			operator*(const Fixed &f1, const Fixed &f2);
	friend	Fixed			operator/(const Fixed &f1, const Fixed &f2);
	Fixed					operator++();
	Fixed					operator++(int);
	Fixed					operator--();
	Fixed					operator--(int);
	static Fixed&			max(Fixed &f1, Fixed &f2);
	static const Fixed&		max(const Fixed &f1, const Fixed &f2);
	static Fixed&			min(Fixed &f1, Fixed &f2);
	static const Fixed&		min(const Fixed &f1, const Fixed &f2);

	int		getRawBits();
	void	setRawBits(int raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};


#endif // __FIXED_H__