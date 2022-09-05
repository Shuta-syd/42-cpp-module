/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:49:37 by shogura           #+#    #+#             */
/*   Updated: 2022/09/05 19:35:57 by shogura          ###   ########.fr       */
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
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	{
		Span sp = Span(5);
		int arr[5] = {6, 3, 17, 9, 11};
		sp.addNumber(arr, 5);
		std::cout << "shortest->"<< sp.shortestSpan() << std::endl;
		std::cout << "longest->" << sp.longestSpan() << std::endl;
	}
	{
		Span foo(10000);
		srand(time(NULL));
		for (size_t i = 0; i < 10000; i++)
		{
			int v = rand();
			foo.addNumber(v);
		}
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << "shortest->" << sp.shortestSpan() << std::endl;
		std::cout << "longest->" << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
