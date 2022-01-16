#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat normal("babka", 4);
	Intern	intern;
	Form *testPres = intern.makeForm("presidential pardon", "Mr. Smith");
	normal.signForm(*testPres);
	normal.executeForm(*testPres);


	//Form *wrong = intern.makeForm("FORMA NO099-222U", "President");
	//normal.signForm(*wrong);
	//wrong = testPres;
}