#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);


int main( void ) {
	
	Point a(3, 3);
	Point b(-2, 1);
	Point c(3, -2);
	Point p(1, 1);
	Point p1(0, 0);
	Point p2(4, 1);
	Point p3(3, 1);
	Point p4(10, 10);
	Point p5(-1, -1);

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
	std::cout << bsp(a, b, c, p5) << std::endl;
	return 0;
}