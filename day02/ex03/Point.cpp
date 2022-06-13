#include "Point.hpp"

Point::Point()
: _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y)
: _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point &point)
: _x(point._x) , _y(point._y)
{
}

Point::~Point()
{
}

Point& Point::operator=(Point &point)
{
	return point;
}

Fixed	Point::getX() const
{
	return this->_x;
}

Fixed	Point::getY() const
{
	return this->_y;
}

std::ostream& operator<<(std::ostream &out, const Point &p)
{
	out << "(" << p._x << ", " << p._y << ")";
	return out;
}

