#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& copy);
	Intern	&operator=(const Intern& other);
	virtual ~Intern();

	Form* makeForm(std::string name, std::string target);

	class FormIsNotExistException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif