/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:42 by shogura           #+#    #+#             */
/*   Updated: 2022/08/23 14:42:55 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#define MAX_GRADE 1
#define MIN_GRADE 150

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade_ = other.grade_;

	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &instance)
{
	std::cout << instance.getName() << ", bureaucrat grade" << instance.getGrade() << "." << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return this->name_;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade_;
}

void Bureaucrat::GradeTooHighException(void)
{

}

void Bureaucrat::GradeTooLowException(void)
{
}

void Bureaucrat::incrementGrade(void)
{

}

void Bureaucrat::decrementGrade(void)
{
}
