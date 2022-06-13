#include "Point.hpp"

static void	getXandY(const Point p, float *x, float *y)
{
	*x = p.getX().toFloat();
	*y = p.getY().toFloat();
}

static bool	checkResult(float res1, float res2, float res3)
{
	if (res1 >= 0 && res2 >= 0 && res3 >= 0)
		return true;
	return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	float	x1, y1;
	float	x2, y2;
	float	x3, y3;
	float	x0, y0;


	getXandY(a, &x1, &y1);
	getXandY(b, &x2, &y2);
	getXandY(c, &x3, &y3);
	getXandY(p, &x0, &y0);

	float	res1;
	float	res2;
	float	res3;

	res1 = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0);
	res2 = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0);
	res3 = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0);	
	return (checkResult(res1, res2, res3));
}