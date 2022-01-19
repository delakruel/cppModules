#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T *arr;
	size_t	arr_size;
public:
	Array() {
		arr = new T; // или здесь просто NULL и часть кода не нужна, 'пустых' массивов в плюсах не существует
		arr_size = 0;
	};
	Array(unsigned int n) {
		arr = new T[n]();
		arr_size = n;
	};
	Array(const Array &copy) {
		this->arr_size = copy.arr_size;
		if (this->arr_size > 0) {
			this->arr = new T[this->arr_size]();
			for (size_t i = 0; i < this->arr_size; i++)
				this->arr[i] = copy.arr[i];
		}
		else
			arr = new T;
	};
	Array	&operator=(const Array& other) {
		if (this != &other) {
			if (this->arr_size > 0)
				delete[] this->arr;
			else
				delete	this->arr;
			this->arr_size = other.arr_size;
			if (this->arr_size > 0) {
				arr = new T[this->arr_size]();
				for (size_t i = 0; i < this->arr_size; i++)
					this->arr[i] = other.arr[i];
			}
			else
				arr = new T;
		}
		return (*this);
	};

	T	&operator[](const int index) {
		if (index < 0)
			throw IncorrectIndexException();
		else {
			size_t	tmp = static_cast<size_t>(index);
			if (tmp >= this->arr_size)
				throw IncorrectIndexException();
		}
		return (arr[index]);
	};

	class IncorrectIndexException : public std::exception {
	public:
		const char* what() const throw() {
			return "Exception! Index is not correct!";
		};
	};

	unsigned int size() const {
		return this->arr_size;
	}

	~Array() {
		if (this->arr_size > 0)
			delete[] this->arr;
		else
			delete this->arr;
	};
};

#endif