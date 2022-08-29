/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:21:35 by shogura           #+#    #+#             */
/*   Updated: 2022/08/29 20:26:23 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iter.hpp>

template <class T>
void print(const T &a)
{
	std::cout << a;
}

int main(void)
{
	int intarr[5] = {0, 1, 2, 3, 4};
	char chararr[3] = {'a', 'b', 'c'};
	std::string strarr[4] = {"Hel", "lo, w", "orl", "d!"};

	iter(intarr, 5, print<int>);
	std::cout << std::endl;

	iter(chararr, 3, print<char>);
	std::cout << std::endl;

	iter(strarr, 4, print<std::string>);
	std::cout << std::endl;

	return (0);
}
