/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:01:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 20:36:30 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void)
{

	// normal pattern
	try
	{
		Form formA("formA", 141, 100);
		Bureaucrat A("A", 50);
		Bureaucrat B("B", 101);

		std::cout << formA << std::endl;
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		A.signForm(formA);
		std::cout << formA << std::endl;
		std::cout << A << std::endl;
		B.signForm(formA);
		std::cout << formA << std::endl;
		std::cout << B << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
