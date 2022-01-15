#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "idea number ";
		this->_ideas[i].push_back((char)(i + '0'));
	}
}

Brain::Brain(std::string test) {
	std::cout << "Brain TEST constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = test + " idea number ";
		this->_ideas[i].push_back((char)((i % 10) + '0'));
	}
}

Brain	&Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i].erase();
			this->_ideas[i].append(other._ideas[i]);
		}
	}
	return (*this);
}

Brain::Brain(const Brain& copy) {
	*this = copy;
}

std::string Brain::getIdea(int i) {
	return (this->_ideas[i]);
};

void	Brain::setIdea(int i, std::string nIdea) {
	this->_ideas[i].erase();
	this->_ideas[i].append(nIdea);
};

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
