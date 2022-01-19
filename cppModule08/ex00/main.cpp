#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(int, char**)
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

// #include "easyfind.hpp"
// #include <vector>
// #include <array>
// #include <deque>
// #include <list>
// #include <map>

// int main(void) {
// 	{
// 		std::cout << "test with array: ";
// 		std::array<int, 4> arr = {2, 3, 5, 4};
// 		std::array<int, 4>::iterator it;
// 		try
// 		{
// 			it = easyfind(arr, 3);
// 			std::cout << *it << " ";
// 			++it;
// 			std::cout << *it << std::endl;

// 			std::cout << *easyfind(arr, 8) << std::endl;
// 		}
// 		catch (std::exception &ex)
// 		{
// 			std::cout << ex.what() << std::endl;
// 		}
// 	}
// 	{
// 		std::cout << "test with vector: ";
// 		std::vector<int> arr(3, 9);
// 		try
// 		{
// 			std::cout << *easyfind(arr, 9) << std::endl;
// 			std::cout << *easyfind(arr, 1231) << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << e.what() << '\n';
// 		}
// 	}
// 	{
// 		std::cout << "test with deque, list and map: ";
// 		std::deque<int> arr;
// 		std::list<int> list_arr(5, 1);
// 		arr.push_back(4);
// 		arr.push_back(-8);
// 		arr.push_back(8);
// 		try
// 		{
// 			std::cout << *easyfind(arr, -8) << " ";
// 			std::cout << *easyfind(list_arr, 1) << std::endl;
// 		}
// 		catch(const std::exception&)
// 		{}
// 	}
// }