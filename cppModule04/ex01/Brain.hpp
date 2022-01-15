#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(std::string test);
	Brain(const Brain& copy);
	Brain	&operator=(const Brain& other);
	std::string getIdea(int i);
	void	setIdea(int i, std::string nIdea);
	virtual ~Brain();
};

#endif