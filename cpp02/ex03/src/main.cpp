/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:56 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 00:12:30 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>
#include <iostream>

int main(void)
{
	Point a(2, 3);
	Point b(6, 6);
	Point c(4, 1);
	Point p_in(3, 2);
	Point p_out(8, 9);

	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;

	std::cout << "point in:" << p_in << std::endl;
	std::cout << "this point is " << bsp(a, b, c, p_in) << std::endl;

	std::cout << "point out:" << p_out << std::endl;
	std::cout << "this point is " << bsp(a, b, c, p_out) << std::endl;
	return 0;
}
