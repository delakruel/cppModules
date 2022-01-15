#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal** anima = new const Animal*[10]();
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			anima[i] = new Cat();
		else 
			anima[i] = new Dog();
	}
	for (int i = 0; i < 10; i++) {
		delete anima[i];
	}
	// Cat test1("test1");
	// Cat test2(test1);
	// std::cout << test2.getBrain()->getIdea(10) << std::endl;
	// test1.getBrain()->setIdea(10, "new test idea");
	// std::cout << test1.getBrain()->getIdea(10) << std::endl;//new test
	// std::cout << test2.getBrain()->getIdea(10) << std::endl;//old one
	//while (1);
}