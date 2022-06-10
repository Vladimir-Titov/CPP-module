#ifndef __FILECHANGER_H__
#define __FILECHANGER_H__

#include <string>
#include <iostream>
#include <fstream>

class FileChanger
{
private:
	std::ifstream	_inputFile;
	std::ofstream	_outFile;
	std::string		_oldContent;
	std::string		_newContent;
	std::string		_oldStr;
	std::string		_newStr;

public:
	FileChanger(){};
	FileChanger(char **argv);

	void	replaceOldStr();
	bool	changeFile();
};



#endif // __FILECHANGER_H__