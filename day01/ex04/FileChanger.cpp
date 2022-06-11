#include "FileChanger.hpp"


FileChanger::FileChanger(char **argv)
{
	this->_inputFile.open(argv[1]);
	this->_outFile.open("out.replace");
	this->_oldStr = std::string(argv[2]);
	this->_newStr = std::string(argv[3]);
}

bool FileChanger::isFindStr(size_t pos_start)
{
	if (pos_start != std::string::npos)
		return true;
	return false;
}

void FileChanger::closeFiles()
{
	this->_inputFile.close();
	this->_outFile.close();
}


bool	FileChanger::replaceInFile()
{
	std::string	str;
	size_t		pos_start;
	if (this->_inputFile.is_open())
	{
		while (std::getline(this->_inputFile, str))
		{
			pos_start = str.find(this->_oldStr);
			if (isFindStr(pos_start))
			{
				str.erase(pos_start, this->_oldStr.length());
				str.insert(pos_start, this->_newStr);
			}
			this->_newContent.append(str.append("\n"));
		}
		this->_newContent = this->_newContent.substr(0, this->_newContent.size() - 1);
	}
	this->_outFile << this->_newContent;
	return true;
}

