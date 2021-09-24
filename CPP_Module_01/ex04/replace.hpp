#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

#define ERRNUMARGS	"Error! Number of arguments should be 3:\n{file_name} {search_string} {target_string}"
#define ERROPENINF	"Error! Could not open the required input file."
#define ERROPENOUTF	"Error! Could not open the required output file."
#define	ERREQSTR	"Search string is equal to target string. Nothing was done."
#define ERREMPTY	"Search string is empty. Nothing was done."

bool	replaceStr(std::string const &inf, \
				std::string const &s1, std::string const &s2);
void	readReplaceWriteLoop(std::ifstream &inputFile, std::ofstream &outputFile,
						std::string const s1, std::string const s2);
void	cstringOps(std::ofstream &outputFile, \
				std::string &line, std::string const &s1, std::string const &s2);
int		getNumOfTargets(char *newLine, char const *newS1);
std::string const	getOutfName(std::string const &inf);
void	callError(const char *message);

#endif
