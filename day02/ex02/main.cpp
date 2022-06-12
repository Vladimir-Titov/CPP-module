#include "Fixed.hpp"

int main( void ) {
	std::cout << "----------Check default subject----------" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	Fixed f(float(120.1));
	Fixed v(float(120.11));
	std::cout << std::boolalpha;
	std::cout << "----------Check comparison operators----------" << std::endl;
	std::cout << (f > v) << std::endl;
	std::cout << (f >= v) << std::endl;
	std::cout << (f < v) << std::endl;
	std::cout << (f <= v) << std::endl;
	std::cout << (f == v) << std::endl;
	std::cout << (f != v) << std::endl;
	std::cout << "----------Check arithmetic operators----------" << std::endl;
	Fixed c(35);
	Fixed d(10);
	std::cout << (c + d) << std::endl;
	std::cout << (c - d) << std::endl;
	std::cout << (c * d) << std::endl;
	std::cout << (c / d) << std::endl;
	std::cout << "----------Check one more tests----------" << std::endl;
	const Fixed one(10);
	const Fixed second(float(5.0));
	std::cout << Fixed::max(one, second) << std::endl;
	std::cout << Fixed::min(one, second) << std::endl;
	std::cout << (one / second) << std::endl;
	std::cout << (one * second) << std::endl;
	return 0;
}