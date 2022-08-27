/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:01:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 21:58:13 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>
#include <cstdlib>
#include <iostream>

int main(void)
{

	{
		std::cout << "## TEST 1 ##" << std::endl;

		Intern intern;

		intern.makeForm("", "me");
		intern.makeForm("abdsfsd", "me");
		intern.makeForm("creation shrubbery", "home");
	}
	{
		std::cout << "## TEST 2 ##" << std::endl;

		Intern intern;
		Bureaucrat bureaucrate("Steve", MAX_GRADE);
		Form *form;

		form = intern.makeForm("robotomy request", "Bender");
		bureaucrate.signForm(*form);
		bureaucrate.executeForm(*form);
		delete form;

		form = intern.makeForm("presidential pardon", "Bender");
		bureaucrate.signForm(*form);
		bureaucrate.executeForm(*form);
		delete form;

		form = intern.makeForm("shrubbery creation", "home");
		bureaucrate.signForm(*form);
		bureaucrate.executeForm(*form);
		delete form;
	}
	return 0;
}
