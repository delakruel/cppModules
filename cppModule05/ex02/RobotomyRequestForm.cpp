#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << "DRRRRRRZRZZZZZZRRRDRDRDRDRRRRRRRRDDDDRRRRRzzz" << std::endl;
	if (time(0) % 2 == 0)
		std::cout << this->getName() << " has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "FAILURE!!1!1 FAILURE1!!11! RANDOM STANDS AGAINST US!!1!!!" << std::endl;
};
