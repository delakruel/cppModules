#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <math.h>
#include <iomanip>

class Converter {
private:
	bool	isOk;
	bool	isMinus;
	bool	isPseudo;
	bool	isFloat;
	bool	isDouble;
	double	num;
public:
	Converter();
	Converter(const Converter& copy);
	Converter	&operator=(const Converter& other);
	virtual ~Converter();

	void	toChar();
	void	toInt();
	void	toFloat(std::string str);
	void	toDouble(std::string str);
	void	strCheck(std::string str);

	class NonDisplayableException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class ImpossibleException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif