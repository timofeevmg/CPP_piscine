#include "replace.hpp"

std::string const	getOutfName(std::string const &inf)
{
	std::string	outf = inf;

	return outf += ".replace";
}

int		getNumOfTargets(char *newLine, char const *newS1)
{
	if (!newLine || !newS1)
		return 0;
	char	*tmp = newLine;
	int		count = 0;
	while ((tmp = strstr(tmp, newS1)))
	{
		count++;
		tmp += strlen(newS1);
	}
	return count;
}

void	cstringOps(std::ofstream &outputFile, std::string &line, std::string const &s1,\
					std::string const &s2)
{
	char *newLine = new char[line.length() + 1];
	std::strcpy(newLine, line.c_str());
	char *newS1 = new char[s1.length() + 1];
	std::strcpy(newS1, s1.c_str());
	int numOfTargets = getNumOfTargets(newLine, newS1);

	int		indexArray[numOfTargets];
	char	*tmp = newLine;
	int		i = 0;
	while ((tmp = strstr(tmp, newS1)))
	{
		indexArray[i] = (tmp - newLine) + i * (s2.length() - s1.length());
		tmp += strlen(newS1);
		i++;
	}

	for (i = 0; i < numOfTargets; i++)
	{
		line.erase(indexArray[i], s1.length());
		line.insert(indexArray[i], s2);
	}

	outputFile << line << std::endl;

	delete [] newLine;
	delete [] newS1;
}

void	readReplaceWriteLoop(std::ifstream &inputFile, std::ofstream &outputFile,
						std::string const s1, std::string const s2)
{
	size_t	index;

	while (inputFile)
	{
		std::string	line;
		std::getline(inputFile, line);

		if ((index = line.find(s1)) != std::string::npos)
			cstringOps(outputFile, line, s1, s2);
		else
			outputFile << line << std::endl;
	}
}

bool	replaceStr(std::string const &inf, \
				std::string const &s1, std::string const &s2)
{
	std::ifstream	inputFile(inf);
	if (!inputFile)
	{
		callError(ERROPENINF);
		return false;
	}

	std::string		const outf = getOutfName(inf);

	std::ofstream	outputFile(outf, std::ios::trunc);
	if (!outputFile)
	{
		callError(ERROPENOUTF);
		inputFile.close();
		return false;
	}

	readReplaceWriteLoop(inputFile, outputFile, s1, s2);

	inputFile.close();
	outputFile.close();
	return true;
}
