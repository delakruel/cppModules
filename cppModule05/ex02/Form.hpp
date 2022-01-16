#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
	const std::string _name;
	bool _isSigned;
	const int	_gradeSign;
	const int	_gradeExec;
public:
	Form(std::string name, int gradeSign, int gradeExec);
	Form(const Form& copy);
	Form	&operator=(const Form& other);
	virtual ~Form();

	/* getters */
	std::string getName() const;
	int	getGradeSign() const;
	int	getGradeExec() const;
	bool getIsSigned() const;

	/* funcs */
	void beSigned(Bureaucrat worker);
	virtual void execute(Bureaucrat const & executor) const = 0;

	/* exception */
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class FormIsNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &o);

#endif