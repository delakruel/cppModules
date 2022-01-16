#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name) {
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const {
	return (this->_name);
};

int	Bureaucrat::getGrade() const {
	return (this->_grade);
};
void Bureaucrat::incGrade() {
	if (this->_grade <= 1)
		throw GradeTooHighException();
	--(this->_grade);
};
void Bureaucrat::decGrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	++(this->_grade);
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception! Grade is too high!";
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception! Grade is too low!";
};

std::ostream &operator<<(std::ostream &os,const Bureaucrat &o) {
	os << "Bureaucrat " << o.getName() << " with grade " << o.getGrade();
	return (os);
}