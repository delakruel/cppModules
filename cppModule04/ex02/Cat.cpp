#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string test) : Animal() {
	std::cout << "Cat-test constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain(test);
}

Cat	&Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type.erase();
		this->type.append(other.type);
		if (this->_brain)
			delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::Cat(const Cat& copy) {
	if (this != &copy) {
		this->type.erase();
		this->type.append(copy.type);
		if (copy._brain)
			this->_brain = new Brain(*copy._brain);
	}
}

void    Cat::makeSound() const {
    std::cout << "I am KITTY-KITTY-CAT!!! Meeeeeeeooooooooowwwwww!!!" << std::endl;
}

void    Cat::setType(std::string type) {
    this->type = type;
}

std::string Cat::getType() const {
    return (this->type);
}

Brain* Cat::getBrain() {
	return (this->_brain);
};

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}
