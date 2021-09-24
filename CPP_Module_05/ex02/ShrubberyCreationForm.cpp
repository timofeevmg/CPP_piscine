#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& _target) : \
Form("SHRUBBERY", 145, 137), target(_target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : \
Form("SHRUBBERY", 145, 137), target(other.target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	other.getFormName();
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	try
	{
		std::ofstream	outFile(this->target + "_shrubbery", std::ios::trunc);
		outFile.exceptions(std::ofstream::badbit | std::ofstream::failbit);
		if (outFile.good())
		{
			writeASCIITrees(outFile);
			outFile.close();
		}
	}
	catch(const std::ofstream::failure& e)
	{
		throw ErrorFileCreate();
	}
}

///////////////////////////////////////////////////////
/////////////        Exceptions         ///////////////
///////////////////////////////////////////////////////
const char*	ShrubberyCreationForm::ErrorFileCreate::what() const throw()
{
	return "An error accured during creating file.";
}
//////////////           ***         //////////////////

void	writeASCIITrees(std::ofstream& outFile)
{
	outFile << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0dkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.'dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.  .OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd.    ,0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx.      :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx.        cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx.          cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMXKWMMMMMMMNd.            cXMMMMMMMMMWNWMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMX:,OMMMMMMNo.              ;KMMMMMMMWk:xWMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMNl  :KMMMMK:                 ,OWMMMMM0, '0MMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMNo.   cXMWk'                   .dNMMMK;   ;KMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMNo.    ,0Kl.                      ;OWX:     :KMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMNl.   .cOx'                         .lOx;.    :KMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMKc   .ckx;                             .ckko,   ;0WMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMWO,  .oKNOl;;;::c;                .:l:;;;clk0kc.   'kWMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMNd.   .,:ccllooxXK:                 ;KNkollc;.       .lKMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMWO;              l0c                   ,kk,              'dXWMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMKl.             .oO:                     .dOl.         ....'oXMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMXkkkOk:        'xO;                        ;kk;        :0XXXWMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMWd.      .cOd.                          .ckx;.      :0WMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMNd.     .:kx;                              .ckxc.     .xNMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMKc.   .;okd;.                                 .;oxdc,.   ;kNMMMMMMMMM" << "\n" \
		<< "MMMMMMMMWXd' .,cdxdc.                                       .;ldxxd:..,dKWMMMMMM" << "\n" \
		<< "MMMMMMN0l.   ;kXKo'.     ..                         ...       .;x0x,    .;oONMMM" << "\n" \
		<< "MMMMWOc.      .'coooddddk0x'                        .lOkdoooddddl' .;,,,,;ckNMMM" << "\n" \
		<< "MMMMMNKOxxxxl.      ...c00;                          .cKKl,'..     .lKWWWWMMMMMM" << "\n" \
		<< "MMMMMMMMMMWk'        .cOd.                             'dOc.         ,kNMMMMMMMM" << "\n" \
		<< "MMMMMMMMMXl.        ,xO:                                 ;xkl.         ;xNMMMMMM" << "\n" \
		<< "MMMMMMMNx'        'dOo.                                    ,dkd;.        'o0NMMM" << "\n" \
		<< "MMMMMNx,        'dOo'                                        .cxko;.       .,cxK" << "\n" \
		<< "MMWXd,        ,dOo'                                             'cdxdc,...,:cld0" << "\n" \
		<< "NOl.       .cxkl.                                                  'cxKXXNWWMMMM" << "\n" \
		<< "x,.     .;dkd;.                                           ..';:loxkO0XNMMMMMMMMM" << "\n" \
		<< "WX0kolld00l.                                      ..';coodddooOWMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMWXOdc;'.                          ..';cldk0XNWNx;..   ,0MMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMWNKOkdlc:;,,,''',,,;;:cllodddddx0WMMMMMMWd.       oWMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMNxcclloodx0NWWWWWW0l:,'...  ,0MMMMMMNkc;,,,;:o0WMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMWk'       ,kWMMMMMX;          lNMMMMMMMMMWWWWMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMNKOxdodxOXWMMMMMXc           'OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl            .xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << "\n" \
		<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx;..       .;xXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
}
