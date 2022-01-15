#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* _brain;
public:
	Dog();
	Dog(std::string test);
	Dog(const Dog& copy);

	Dog	&operator=(const Dog& other);

	std::string getType() const;
    void    setType(std::string type);
    void    makeSound() const;
	Brain* getBrain();

	virtual ~Dog();
};

#endif