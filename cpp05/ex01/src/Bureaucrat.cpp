/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:42 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 21:43:53 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#define MAX_GRADE 1
#define MIN_GRADE 150

Bureaucrat::Bureaucrat() : name_("unknown"), grade_(MIN_GRADE)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade)
{
	if (grade > MIN_GRADE)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade < MAX_GRADE)
		throw(Bureaucrat::GradeTooHighException());
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

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &instance)
{
	stream << instance.getName() << ", bureaucrat grade" << instance.getGrade() << ".";

	return stream;
}

std::string Bureaucrat::getName(void) const
{
	return this->name_;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade_;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return HighException;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return LowException;
}

void Bureaucrat::incrementGrade(void)
{
	if (grade_ > MIN_GRADE)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade_ < MAX_GRADE)
		throw(Bureaucrat::GradeTooHighException());
	grade_--;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade_ > MIN_GRADE)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade_ < MAX_GRADE)
		throw(Bureaucrat::GradeTooHighException());
	grade_++;
}

void Bureaucrat::signForm(Form &F) const
{
	try
	{
		F.beSigned(*this);
		std::cout << this->getName() << " signed " << F.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << F.getName() << " because "  << e.what() << std::endl;
	}
}
