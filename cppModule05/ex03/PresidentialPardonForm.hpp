#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm& other);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};

#endif