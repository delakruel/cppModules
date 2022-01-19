#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        //const int value = rand();
        numbers[i] = i;//value;
        mirror[i] = i;//value;
    }
    //SCOPE
	// int	*a = new int();
	// std::cout << *a << std::endl;
	Array<int> five(5);
	std::cout << five[0] << five[1] << five[2] << five[3] << five[4] << std::endl;
    Array<int> tmp = numbers;
    Array<int> test(numbers);
	std::cout << tmp[2] << std::endl;//2
	std::cout << test[10] << std::endl;//10
	test[10] += 888;
	std::cout << test[10] << std::endl;//898
	std::cout << tmp[10] << std::endl;//10
	std::cout << test.size() << std::endl; // 750
	Array<int>zero;
	std::cout << zero.size() << std::endl; // 0
	// try
    // {
    //     std::cout << zero[0] << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
	test = zero;
	std::cout << test.size() << std::endl; // 0
	// try
    // {
    //     std::cout << test[10] << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	delete [] mirror;//
	return 0;
}
