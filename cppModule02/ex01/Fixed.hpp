#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
private:
	int	fix;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed& copy);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator=(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

std::ostream &operator<<(std::ostream &os,const Fixed &o);

#endif