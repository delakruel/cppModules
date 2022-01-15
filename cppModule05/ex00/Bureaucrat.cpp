#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
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

};
void Bureaucrat::decGrade() {

};

std::ostream &operator<<(std::ostream &os,const Bureaucrat &o) {
	os << "Bureaucrat " << o.getName() << " with grade " << o.getGrade() << std::endl;
	return (os);
}