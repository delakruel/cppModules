#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 1; i <= 5; ++i)
		vec.push_back(i * 10); // 10, 20, 30, 40, 50

	try {
		std::cout << *easyfind(vec, 5) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(vec, -5) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(vec, 10) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(vec, 50) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};


	std::list<int> myList;
	for (int i = 1; i <= 5; ++i)
		myList.push_back(i * 10); // 10, 20, 30, 40, 50

	try {
		std::cout << *easyfind(myList, 5) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(myList, -5) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(myList, 10) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};

	try {
		std::cout << *easyfind(myList, 50) << std::endl;
	}
	catch(const std::exception& e) { 
		std::cout << e.what() << std::endl;
	};
	return (0);
}
