#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat	&Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Cat::Cat(const Cat& copy) {
	*this = copy;
}

void    Cat::makeSound() const {
    std::cout << "I am KITTY-KITTY-CAT!!! Meeeeeeeooooooooowwwwww!!!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
