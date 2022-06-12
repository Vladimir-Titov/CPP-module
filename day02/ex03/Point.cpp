#include "Point.hpp"

Point::Point()
: _x(Fixed(0)), _y(Fixed(0))
{
	;
}

Point::Point(const float x, const float y)
: _x(Fixed(x)), _y(Fixed(y))
{
	std::cout << "float constructor" << std::endl;
	std::cout << x << ", " << y << std::endl;
}

Point::Point(const Point &point)
{
	*this = point;
}

Point::~Point()
{
	;
}

Point& Point::operator=(const Point &point)
{
	(void) point;
	return *this;
}

const Fixed&	Point::getX() const
{
	return this->_x;
}

const Fixed&	Point::getY() const
{
	return this->_y;
}

