#ifndef __HARL_H__
#define __HARL_H__

#include <string>
#include <iostream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl(){};
	~Harl(){};

	void	complain(std::string level);
};

#endif // __HARL_H__