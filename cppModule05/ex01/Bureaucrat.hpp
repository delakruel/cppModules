#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
private:
	const std::string _name;
	int	_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat	&operator=(const Bureaucrat& other);
	virtual ~Bureaucrat();

	/* getters */
	int	getGrade() const;
	std::string getName() const;

	/* func */
	void incGrade();
	void decGrade();
	void signForm(Form toSign);

	/* exceptions */
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};	
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &o);

#endif