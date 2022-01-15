#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
	const std::string _name;
	int	_grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat	&operator=(const Bureaucrat& other);
	
	virtual ~Bureaucrat();

	int	getGrade() const;
	std::string getName() const;
	void incGrade();
	void decGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &o);

#endif