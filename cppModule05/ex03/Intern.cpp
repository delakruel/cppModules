#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern	&Intern::operator=(const Intern& other) {
	if (this != &other) {
	}
	return (*this);
}

Intern::~Intern() {}

const char* Intern::FormIsNotExistException::what() const throw() {
	return "Exception! Intern can't make form what you wish! Try making right form!";
};

Form* Intern::makeForm(std::string name, std::string target) {
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *newForm = nullptr;

	for (int i = 0; i < 3; i++) {
		if (name == names[i]) {
		switch (i)
		{
			case 0:
				newForm = new ShrubberyCreationForm(target);
				break;
			case 1:
				newForm = new RobotomyRequestForm(target);
				break;
			case 2:
				newForm = new PresidentialPardonForm(target);
				break;
		}
		std::cout << "Intern created " << name << " form targeted on " << target << std::endl;
	}
	}
	try
	{
		if (newForm == nullptr)
			throw FormIsNotExistException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (newForm);
};
