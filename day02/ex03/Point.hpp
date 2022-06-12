#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	Point&			operator=(const Point &point);
	const Fixed&	getX() const;
	const Fixed&	getY() const;
};

#endif