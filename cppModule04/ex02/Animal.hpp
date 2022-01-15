#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& copy);

	Animal	&operator=(const Animal& other);

    virtual std::string getType() const = 0;
    virtual void    setType(std::string type) = 0;
    virtual void    makeSound() const = 0;

	virtual ~Animal();
};

#endif