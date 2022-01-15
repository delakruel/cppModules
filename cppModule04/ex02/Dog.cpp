#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string test) : Animal() {
	std::cout << "Dog-test constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain(test);
}

Dog	&Dog::operator=(const Dog& other) {
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

Dog::Dog(const Dog& copy) {
	if (this != &copy) {
		this->type.erase();
		this->type.append(copy.type);
		if (copy._brain)
			this->_brain = new Brain(*copy._brain);
	}
}

void    Dog::makeSound() const {
    std::cout << "I am DOGE!! AUUUWWWWWHHHFFFFF!!!" << std::endl;
}

void    Dog::setType(std::string type) {
    this->type = type;
}

std::string Dog::getType() const {
    return (this->type);
}

Brain* Dog::getBrain() {
	return (this->_brain);
};

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}
