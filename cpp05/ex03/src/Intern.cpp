/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:22:51 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 19:30:43 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

const std::string Intern::formTypes_[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

int Intern::getFormIdx(std::string &name)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (name == formTypes_[i])
			return i;
	}
	return -1;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *form = NULL;
	int idx = getFormIdx(name);
	switch (idx)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		std::cout << "Intern is not creates." << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << name << "." << std::endl;
	return form;
}
