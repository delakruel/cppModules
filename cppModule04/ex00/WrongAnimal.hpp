#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);

	WrongAnimal	&operator=(const WrongAnimal& other);

    std::string getType() const;
    void    setType(std::string type);
    void    makeSound() const;

	~WrongAnimal();
};

#endif