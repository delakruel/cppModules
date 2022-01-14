#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main() {
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* k = new WrongDog();
    const WrongAnimal* m = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    std::cout << m->getType() << " " << std::endl;
    m->makeSound(); //will output the Wrong cat sound!
    k->makeSound();
    metaWrong->makeSound();
}