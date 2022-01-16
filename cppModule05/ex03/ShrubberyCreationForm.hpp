#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};

#endif