#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain;
public:
	Cat();
	Cat(std::string test);
	Cat(const Cat& copy);

	Cat	&operator=(const Cat& other);

    void    makeSound() const;
	Brain* getBrain();

	~Cat();
};

#endif