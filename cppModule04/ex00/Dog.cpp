#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog	&Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Dog::Dog(const Dog& copy) {
	*this = copy;
}

void    Dog::makeSound() const {
    std::cout << "I am DOGE!! AUUUWWWWWHHHFFFFF!!!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}
