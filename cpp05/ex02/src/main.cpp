/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:01:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 16:44:46 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <cstdlib>
#include <iostream>

int main(void)
{

	{
		ShrubberyCreationForm form("garden");
		Bureaucrat bob("Bob", 138);

		std::cout << form << std::endl;
		std::cout << bob << std::endl;
		bob.signForm(form);
		form.execute(bob);
		std::cout << "> Incrementing " << bob.getName() << "'s grade" << std::endl;
		bob.incrementGrade();
		form.execute(bob);
	}
	std::cout << "----------------------------------" << std::endl;
	{
		RobotomyRequestForm form("target2");
		Bureaucrat jim("Jim", 30);

		jim.signForm(form);
		form.execute(jum)
	}
	std::cout << "----------------------------------" << std::endl;
	{
		PresidentialPardonForm form("target3");
		Bureaucrat tom("Tom", 2);

		tom.signForm(form);
		tom.executeForm(form);
	}
	return 0;
}
