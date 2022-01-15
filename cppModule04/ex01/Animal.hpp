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

    std::string getType() const;
    void    setType(std::string type);
    virtual void    makeSound() const;

	virtual ~Animal();
};

#endif