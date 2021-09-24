#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(const std::string& _idea);
	Brain(const Brain& other);
	virtual ~Brain();

	Brain&	operator=(const Brain& _other);

	const std::string&	getBrainIdea(const int& i) const;

	void	setBrainIdeas(const std::string& _idea, const int& i);
};

#endif
