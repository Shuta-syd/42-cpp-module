/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:49:37 by shogura           #+#    #+#             */
/*   Updated: 2022/09/08 21:32:38 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main(void)
{
	{
		std::cout << "[TEST1]" << std::endl;
		Span foo(10);
		srand(time(NULL));
		for (size_t i = 0; i < 10; i++)
		{
			int v = rand() % 150;
			foo.addNumber(v);
		}
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	{
		std::cout << "[TEST2]" << std::endl;
		Span sp = Span(5);
		std::vector<int> arr;
		for (size_t i = 0; i < 5; i++)
			arr.push_back(rand() % 150);
		sp.addNumber(arr);
		std::cout << "shortest->"<< sp.shortestSpan() << std::endl;
		std::cout << "longest->" << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "[TEST3]" << std::endl;
		Span foo(2);
		foo.addNumber(INT_MIN);
		foo.addNumber(INT_MIN + 1);
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	{
		std::cout << "[TEST4]" << std::endl;
		Span foo(2);
		foo.addNumber(0);
		foo.addNumber(-1);
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	{
		std::cout << "[TEST5]" << std::endl;
		Span foo(2);
		foo.addNumber(INT_MIN);
		foo.addNumber(INT_MAX);
		std::cout << "shortest->" << foo.shortestSpan() << std::endl;
		std::cout << "longest->" << foo.longestSpan() << std::endl;
	}
	{
		std::cout << "[TEST6]" << std::endl;
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
		std::cout << "[TEST7]" << std::endl;
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
