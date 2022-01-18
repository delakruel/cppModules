#include "Converter.hpp"

Converter::Converter() {
	this->isOk = 1;
	this->isFloat = 0;
	this->isDouble = 0;
	this->isMinus = 0;
	this->isPseudo = 0;
}

Converter::Converter(const Converter& copy) {
	*this = copy;
}

Converter	&Converter::operator=(const Converter& other) {
	if (this != &other) {
		this->isOk = other.isOk;
		this->isMinus = other.isMinus;
		this->isPseudo = other.isPseudo;
		this->isFloat = other.isFloat;
		this->isDouble = other.isDouble;
		this->num = other.num;
	}
	return (*this);
}

Converter::~Converter() {}

void	Converter::strCheck(std::string str) {
	int	f = 0;
	int	dot = 0;
	int minus = 0;

	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		this->isPseudo = 1;
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] != '.' && str[i] != 'f' && (str[i] < '0' || str[i] > '9') && str[i] != '-' && !this->isPseudo)
			this->isOk = 0;
		if (str[i] == '.')
			dot++;
		if (str[i] == 'f')
			f++;
		if (str[i] == '-')
			minus++;
	}
	if ((dot > 1 || f > 1 || (f == 1 && str.back() != 'f') || minus > 1) && !this->isPseudo)
		this->isOk = 0;
	if (!this->isPseudo) {
		if (f == 1)
			this->isFloat = 1;
		else
			if (dot == 1)
				this->isDouble = 1;
	}
	if (minus == 1 && str[0] != '-')
		this->isOk = 0; 
	if (this->isOk) {
		if (this->isPseudo) {
			if (str == "nan" || str == "+inf" || str == "-inf")
				this->isDouble = 1;
			else
				this->isFloat = 1;
		}
		else
			this->num = stod(str);
	}
};

void	Converter::toChar() {
	std::cout << "char: ";
	if (!this->isOk || this->isPseudo || this->num <= static_cast<double>(-1) || this->num >= static_cast<double>(128)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	char ch = static_cast<char>(this->num);
	if (ch < 32 || ch > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << ch << "'" << std::endl;
};

void	Converter::toInt() {
	std::cout << "int: ";
	if (!this->isOk || this->isPseudo || this->num >= static_cast<double>(2147483648) || this->num <= static_cast<double>(-2147483648)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(this->num) << std::endl;
};

void	Converter::toFloat(std::string str) {
	std::cout << "float: ";
	if (this->isPseudo) {
		if (this->isFloat)
			std::cout << str << std::endl;
		else
			std::cout << str << 'f' << std::endl;
		return ;
	}
	if (!this->isOk)
		std::cout << "impossible" << std::endl;
	else {
		std::cout << std::setprecision(16) << this->num;
		if (this->num == floor(this->num))
			std::cout << ".0";
		std::cout << 'f' << std::endl;
	}
};

void	Converter::toDouble(std::string str) {
	std::cout << "double: ";
	if (this->isPseudo) {
		if (this->isDouble)
			std::cout << str;
		else
			for (size_t i = 0; i < str.size() - 1; i++)
				std::cout << str[i];
		std::cout << std::endl;
		return ;
	}
	if (!this->isOk)
		std::cout << "impossible" << std::endl;
	else {
		std::cout << std::setprecision(16) << this->num;
		if (this->num == floor(this->num))
			std::cout << ".0";
		std::cout << std::endl;
	}
};
