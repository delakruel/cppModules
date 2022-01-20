#include "MutantStack.hpp"
#include <random>
#include <ctime>

int main() {
	//subject main::

	// MutantStack<int> mstack;

	// mstack.push(5);
	// mstack.push(17);

	// std::cout << mstack.top() << std::endl;

	// mstack.pop();

	// std::cout << mstack.size() << std::endl;

	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);

	// //[...]
	// mstack.push(0);

	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;

	// while (it != ite) {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }

	// std::stack<int> s(mstack);
	// MutantStack<int> z(mstack);

	MutantStack<int> m;
	MutantStack<int>::iterator it;

	if (m.empty()) // test empty
		std::cout << "MutantStack is empty" << std::endl;
	else
		std::cout << "MutantStack is not empty!" << std::endl;

	m.push(10); //test push
	m.push(14);
	m.push(27);
	m.push(-200);
	m.push(223);
	m.push(-44);

	for (it = m.begin(); it != m.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	if (m.empty()) // test empty
		std::cout << "MutantStack is empty" << std::endl;
	else
		std::cout << "MutantStack is not empty!" << std::endl;

	std::sort(m.begin(), m.end()); //test algo based on iter

	for (it = m.begin(); it != m.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	m.pop(); //test deleting 
	m.pop();

	for (it = m.begin(); it != m.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << m.size() << std::endl; // test size

	std::cout << m.top() << " is a top and " << *--m.end() << " is last number by iter" <<std::endl; // test top

	m.push(44);
	m.push(77);
	m.push(28);

	for (it = m.begin(); it != m.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::generate(m.begin(), m.end(), rand); // test algo based on iter
	
	for (it = m.begin(); it != m.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	MutantStack<int> kek = m; // test =

	for (it = kek.begin(); it != kek.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	return (0);
}