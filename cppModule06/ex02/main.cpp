#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>

Base*	generate(void) {

	switch (time(0) % 3)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	}
	return (nullptr);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Created class is class A!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Created class is class B!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Created class is class C!" << std::endl;
	else
		std::cout << "You are trying to cast Null-pointer!" << std::endl;
}

void	identify(Base& p) {
	if (&p == nullptr) {
		std::cout << "You are trying to cast Null-pointer!" << std::endl;
		return ;
	}
	//A
	try
	{
		if (&(dynamic_cast<A&>(p)))
			std::cout << "Created class is class A!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Created class is NOT A!!!" << std::endl;
	}
	//B
	try
	{
		if (&(dynamic_cast<B&>(p)))
			std::cout << "Created class is class B!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Created class is NOT B!!!" << std::endl;
	}
	//C
	try
	{
		if (&(dynamic_cast<C&>(p)))
			std::cout << "Created class is class C!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Created class is NOT C!!!" << std::endl;
	}	
}

int	main() {
	A *pust = new A;
	Base *test1 = generate();
	identify(test1); // random
	identify(pust); // A
	Base	*test2 = generate();
	identify(test2); // random2 == random(time)
	identify(*test2); // random2 == random(time)
}