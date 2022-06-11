#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
private:
	static const int	_fraction = 8;
	int					_value;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);

	Fixed&	operator=(const Fixed &fixed);
	int		getRawBits();
	void	setRawBits(int raw);
};


#endif // __FIXED_H__