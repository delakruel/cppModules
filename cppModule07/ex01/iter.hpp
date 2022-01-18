#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (*f)(T const &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
	return ;
};

// перегрузка для работы с шаблонными функциями не конст
// template <typename T, typename F>
// void iter(T *array, size_t len, F f)
// {
// 	for (size_t i = 0; i < len; i++)
// 		f(array[i]);
// 	return ;
// };

#endif