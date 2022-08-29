/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:01:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/29 19:47:27 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int main(void)
{

	// normal pattern
	try
	{
		Bureaucrat A("A", 1);
		std::cout << A << std::endl;
		std::cout << A.getGrade() << std::endl;
		std::cout << A.getName() << std::endl;
		A.incrementGrade();
		std::cout << A << std::endl;
		A.decrementGrade();
		std::cout << A << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// exception pattern
	try
	{
		Bureaucrat B("B", 151);
		std::cout << B << std::endl;
		std::cout << B.getGrade() << std::endl;
		std::cout << B.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// exception pattern 2
	try
	{
		Bureaucrat C("C", 0);
		std::cout << C << std::endl;
		std::cout << C.getGrade() << std::endl;
		std::cout << C.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
