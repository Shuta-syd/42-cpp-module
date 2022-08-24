/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:01:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/24 18:39:33 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void)
{

	// normal pattern
	{
		Form formA("formA", false, 100, 100);
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
	return 0;
}
