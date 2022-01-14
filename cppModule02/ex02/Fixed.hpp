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

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed	&operator=(const Fixed& other);
/* Ariphmetic */
	Fixed	operator+(const Fixed& second);
	Fixed	operator-(const Fixed& second);
	Fixed	operator*(const Fixed& second);
	Fixed	operator/(const Fixed& second);
/* Sravnenie */
	bool operator>(const Fixed& second);
	bool operator<(const Fixed& second);
	bool operator>=(const Fixed& second);
	bool operator<=(const Fixed& second);
	bool operator==(const Fixed& second);
	bool operator!=(const Fixed& second);
/* Min Max */
	static	Fixed &min(Fixed &first, Fixed &second);
	static	Fixed &max(Fixed &first, Fixed &second);
	static	const Fixed &min(const Fixed &first, const Fixed &second);
	static	const Fixed &max(const Fixed &first, const Fixed &second);
/* In/De-crement */
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	~Fixed();
};

std::ostream &operator<<(std::ostream &os,const Fixed &o);

#endif