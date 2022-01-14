#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WRONG_DEFAULT_TYPE";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
}

void    WrongAnimal::setType(std::string type) {
    this->type = type;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

void    WrongAnimal::makeSound() const {
    std::cout << "I am WRONG_ANIMAL!! I CAN DO SO MANY SOUNDS!!!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}
