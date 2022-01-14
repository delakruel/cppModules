#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat	&WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
}

void    WrongCat::makeSound() const {
    std::cout << "I am WROOOOOOOOONG KITTY-KITTY-CAT!!! Meeeeeeeooooooooowwwwww!!!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Cat destructor called" << std::endl;
}
