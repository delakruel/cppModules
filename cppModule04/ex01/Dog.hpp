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

    void    makeSound() const;
	Brain* getBrain();

	virtual ~Dog();
};

#endif