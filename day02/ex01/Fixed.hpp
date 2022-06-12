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
	
	int		getRawBits();
	void	setRawBits(int raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};


#endif // __FIXED_H__