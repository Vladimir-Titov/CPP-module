#include "FileChanger.hpp"

int main(int argc, char **argv)
{
	(void) argc;
	FileChanger	file(argv);
	file.replaceInFile();
	file.closeFiles();
	return 0;
}
