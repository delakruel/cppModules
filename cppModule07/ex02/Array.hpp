#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T *arr;
public:
	Array() {
		arr = new T;
	};
	Array(unsigned int n) {
		arr = new T[n];
	};
	Array(const Array &copy) {
		this->arr = copy.arr;
	};
	Array	&operator=(const Array& other) {
		if (this != &other) {
			this->arr = other.arr;
		}
	return (*this);
	};

	T	&operator[](const int index) {
		if (index < 0)
			throw IncorrectIndexException();
		return (arr[index]);
	};

	class IncorrectIndexException : public std::exception {
	public:
		const char* what() const throw() {
			return "Exception! Index is not correct!";
		};
	};
	unsigned int size() {
		unsigned int i = 0;
		while (arr) {
			i++;
			arr += 4;
		}
	}

	~Array() {
		//delete	arr;
	};
};

#endif