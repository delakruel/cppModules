#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

class ElemNotFoundException : public std::exception {
public:
	const char* what() const throw() {
		return "Exception! Can't find element in collection!";
	};
};

template<typename T>
typename T::iterator easyfind(T &elem, int n) {
	typename T::iterator kekis = std::find(elem.begin(), elem.end(), n);
	if (kekis == elem.end())
		throw ElemNotFoundException();
	return (kekis);
}

#endif