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
	std::string		_newContent;
	std::string		_oldStr;
	std::string		_newStr;

public:
	FileChanger(){};
	FileChanger(char **argv);

	bool	isFindStr(size_t pos_start);
	void	closeFiles();
	bool	replaceInFile();
};



#endif // __FILECHANGER_H__