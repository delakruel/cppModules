#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fix = 0;
}

Fixed::Fixed(const int intNum) {
	std::cout << "Int constructor called" << std::endl;
	this->fix = intNum * (1 << this->bits);
};

Fixed::Fixed(const float floatNum) {
	std::cout << "Float constructor called" << std::endl;
	this->fix = roundf(floatNum * (1 << this->bits));
};

float	Fixed::toFloat(void) const {
	float temp = (float)this->fix / (1 << this->bits);
	return (temp);
};

int		Fixed::toInt(void) const {
	return (this->fix / (1 << this->bits));
};

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		this->fix = other.getRawBits();
	}
	return (*this);
};

int Fixed::getRawBits(void) const {
	return (this->fix);
};

void Fixed::setRawBits(int const raw) {
	this->fix = raw;
};

std::ostream &operator<<(std::ostream &os,const Fixed &o) {
	os << o.toFloat();
	return (os);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}