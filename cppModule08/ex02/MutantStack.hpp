#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>


template<typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>(MutantStack const& copy) : std::stack<T>(copy) {};
	MutantStack	&operator=(const MutantStack& other);
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
	const_iterator cbegin() {
		return this->c.cbegin();
	}
	const_iterator cend() {
		return this->c.cend();
	}
};

#endif