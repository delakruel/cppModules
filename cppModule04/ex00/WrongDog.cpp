#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog	&WrongDog::operator=(const WrongDog& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongDog::WrongDog(const WrongDog& copy) {
	*this = copy;
}

void    WrongDog::makeSound() const {
    std::cout << "I am WRONGE_DOGE!! AUUUWWWWWHHHFFFFF!!!" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "Dog destructor called" << std::endl;
}
