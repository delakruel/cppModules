#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "DEFAULT_TYPE";
}

Animal	&Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Animal::Animal(const Animal& copy) {
	*this = copy;
}

void    Animal::setType(std::string type) {
    this->type = type;
}

std::string Animal::getType() const {
    return (this->type);
}

void    Animal::makeSound() const {
    std::cout << "I am ANIMAL!! I CAN DO SO MANY SOUNDS!!!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
