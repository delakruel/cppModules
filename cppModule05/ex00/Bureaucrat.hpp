#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
	const std::string _name;
	int	_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat	&operator=(const Bureaucrat& other);
	
	virtual ~Bureaucrat();

	int	getGrade() const;
	std::string getName() const;
	void incGrade();
	void decGrade();

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