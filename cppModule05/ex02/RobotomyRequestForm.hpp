#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif