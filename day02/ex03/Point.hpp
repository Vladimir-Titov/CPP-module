#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	Point					&operator=(Point &point);
	Fixed					getX() const;
	Fixed					getY() const;

	friend	std::ostream&	operator<<(std::ostream &out, const Point &p);
};

#endif