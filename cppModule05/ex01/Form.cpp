#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	this->_isSigned = 0;
}

Form::Form(const Form& copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {
	this->_isSigned = copy._isSigned;
}

Form	&Form::operator=(const Form& other) {
	if (this != &other) {
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

Form::~Form() {}

std::string Form::getName() const {
	return (this->_name);
};

int	Form::getGradeSign() const {
	return (this->_gradeSign);
};

int	Form::getGradeExec() const {
	return (this->_gradeExec);
};

bool Form::getIsSigned() const {
	return (this->_isSigned);
};

void Form::beSigned(Bureaucrat worker) {

};

const char* Form::GradeTooHighException::what() const throw() {
	return "Exception! Grade is too high!";
};

const char* Form::GradeTooLowException::what() const throw() {
	return "Exception! Grade is too low!";
};

std::ostream &operator<<(std::ostream &os,const Form &o) {
	os << "Form " << o.getName() << " with signGrade " << o.getGradeSign() << " and with execGrade " << o.getGradeExec();
	if (o.getIsSigned())
		os << " is signed!" << std::endl;
	else
		os << " is NOT signed!" << std::endl;
	return (os);
}