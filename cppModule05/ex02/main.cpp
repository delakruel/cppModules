#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat normal("babka", 4);
	Bureaucrat loh("loshara", 137);

	Form *testShrub = new ShrubberyCreationForm("derevo");
	normal.signForm(*testShrub);
	loh.executeForm(*testShrub);

	Form *testRobot = new RobotomyRequestForm("ROBO");
	loh.signForm(*testRobot);
	normal.executeForm(*testRobot);
	normal.signForm(*testRobot);
	normal.executeForm(*testRobot);

	Form *testPres = new PresidentialPardonForm("Mr. Smith");
	loh.signForm(*testPres);
	normal.executeForm(*testPres);
	normal.signForm(*testPres);
	normal.executeForm(*testPres);
}