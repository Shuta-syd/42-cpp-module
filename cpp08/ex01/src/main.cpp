/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:49:37 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 18:57:38 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main(void)
{
	{
		Span foo(10);
		srand(time(NULL));
		for (size_t i = 0; i < 10; i++)
		{
			int v = rand() % 150;
			foo.addNumber(v);
			std::cout << "Added " << v << std::endl;
		}
		std::cout << foo.shortestSpan() << std::endl;
		std::cout << foo.longestSpan() << std::endl;
	}
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span foo(10000);
		srand(time(NULL));
		for (size_t i = 0; i < 10000; i++)
		{
			int v = rand();
			foo.addNumber(v);
		}
		std::cout << foo.shortestSpan() << std::endl;
		std::cout << foo.longestSpan() << std::endl;
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
