#include "FileChanger.hpp"


FileChanger::FileChanger(char **argv)
{
	this->_inputFile.open(argv[1]);
	this->_outFile.open(std::string(argv[1]).append("out.txt"));
	this->_oldStr = std::string(argv[2]);
	this->_newStr = std::string(argv[3]);
}

void	FileChanger::replaceOldStr()
{
	
}

bool	FileChanger::changeFile()
{
	std::string	str;
	if (this->_inputFile.is_open())
	{
		while (std::getline(this->_inputFile, str))
		{
			this->replaceOldStr();
			this->_newContent.append(str.append("\n"));
		}
		this->_newContent = this->_newContent.substr(0, this->_newContent.size() - 1);
	}
	this->_outFile << this->_newContent;
	return true;
}

