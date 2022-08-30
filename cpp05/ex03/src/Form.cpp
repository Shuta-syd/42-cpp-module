/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:20:21 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 20:43:28 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : name_("unknown"), is_signed_(false), req_sign_(MIN_GRADE), req_exe_(MIN_GRADE)
{
}

Form::Form(std::string name, const int req_sign, const int req_exe) : name_(name), is_signed_(false), req_sign_(req_sign), req_exe_(req_exe)
{
	if (req_sign > MIN_GRADE || req_exe > MIN_GRADE)
		throw(Form::GradeTooLowException());
	else if (req_sign < MAX_GRADE || req_exe < MAX_GRADE)
		throw(Form::GradeTooHighException());
}

Form::Form(const Form &other) : req_sign_(other.req_sign_), req_exe_(other.req_exe_)
{
	*this = other;
}

Form::~Form()
{
}

Form &Form::operator=(const Form &other)
{
	(void)other;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "[Exception] Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "[Exception] Grade is too low";
}

const char *Form::NotSignedException::what() const throw()
{
	return "[Exception] is_signed not true";
}

const char *Form::AlreadySignedException::what() const throw()
{
	return "this form is already signed";
}

std::string Form::getName(void) const
{
	return name_;
}

bool Form::getIsSigned(void) const
{
	return is_signed_;
}

int Form::getReqSign(void) const
{
	return req_sign_;
}

int Form::getReqExe(void) const
{
	return req_exe_;
}

std::ostream &operator<<(std::ostream &stream, const Form &F)
{
	stream << F.getName() << ", is_signed " << F.getIsSigned() << ", req_sign " << F.getReqSign() << ", req_exe " << F.getReqExe();

	return stream;
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > req_sign_)
		throw(Form::GradeTooLowException());
	else if (is_signed_ == true)
		throw(Form::AlreadySignedException());
	is_signed_ = true;
}

bool Form::isSigned(const Bureaucrat &exe) const
{
	if (getIsSigned() == false)
		throw(Form::NotSignedException());
	else if (exe.getGrade() > getReqExe())
		throw(Form::GradeTooLowException());
	return true;
}
