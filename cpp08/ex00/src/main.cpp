/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:39:22 by shogura           #+#    #+#             */
/*   Updated: 2022/09/08 21:42:35 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <vector>
#include <list>
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

template <typename T>
void test_value(std::list<T> &v, T value)
{
	if (easyfind(v, value) != v.end())
		std::cout << "value " << value << " found" << std::endl;
	else
		std::cout << "no occurence found for value " << value << std::endl;
}

int main(void)
{
	{
		std::cout << "[TEST1] vector\n" << std::endl;
		std::vector<int> value;
		std::vector<int> key;
		srand(time(NULL));
		for (size_t i = 0; i < 10; i++)
		{
			int v = rand() % 100;
			key.push_back(rand() % 100);
			value.push_back(v);
			std::cout << "value[" << i << "] = " << v << std::endl;
		}
		for (size_t i = 0; i < key.size(); i++)
			test_value(value, key.at(i));
	}
	{
		std::cout << "\n[TEST2] list\n" << std::endl;
		std::list<int> value;
		std::vector<int> key;
		srand(time(NULL));
		for (size_t i = 0; i < 10; i++)
		{
			int v = rand() % 100;
			key.push_back(rand() % 100);
			value.push_back(v);
			std::cout << "value[" << i << "] = " << v << std::endl;
		}
		for (size_t i = 0; i < key.size(); i++)
			test_value(value, key.at(i));
	}
	return 0;
}
