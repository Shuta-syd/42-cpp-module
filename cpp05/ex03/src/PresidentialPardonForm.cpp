/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:09:39 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 16:37:48 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", false, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", false, 25, 5), target_(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->target_;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (isSigned(executor))
		std::cout << "Zaphod Beeblebrox forgave " << this->target_ << "." << std::endl;
}
