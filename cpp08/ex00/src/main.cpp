/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:39:22 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 16:25:12 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <vector>
#include <iostream>
#include <cstdlib>

template <typename T>
void test_value(std::vector<T> &v, T value)
{
	if (easyfind(v, value) != v.end())
		std::cout << "value " << value << " found" << std::endl;
	else
		std::cout << "no occurence found for value " << value << std::endl;
}

int main(void)
{
	std::vector<int> value;
	srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		int v = rand() % 150;
		value.push_back(v);
		std::cout << "value[" << i << "] = " << v << std::endl;
	}
	test_value(value, 5);
	test_value(value, 15);
	test_value(value, 25);
	test_value(value, 35);
	test_value(value, 45);
	test_value(value, 35);
	test_value(value, 10);
	test_value(value, 20);
	test_value(value, 100);
	test_value(value, 90);

	return 0;
}
