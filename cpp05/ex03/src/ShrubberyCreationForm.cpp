/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:09:39 by shogura           #+#    #+#             */
/*   Updated: 2022/08/29 19:45:32 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

const char *ShrubberyCreationForm::asciiTree =
	"			*\n"
	"		   *-*\n"
	"		  *---*\n"
	"		 *-----*\n"
	"		*-------*\n"
	"	   *---------*\n"
	"	       |||\n";

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Surubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Surubbery", 145, 137), target_(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->target_;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isSigned(executor))
	{
		std::ofstream file((getTarget() + "_shrubbery").c_str());
		if (file.is_open())
		{
			file << asciiTree << std::endl;
			file.close();
		}
		else
			std::cerr << "Unable to open file" << std::endl;
	}
}
