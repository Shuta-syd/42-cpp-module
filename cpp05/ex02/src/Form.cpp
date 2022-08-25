/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:20:21 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 15:19:03 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : name_("unknown"), is_signed_(false), req_sign_(MIN_GRADE), req_exe_(MIN_GRADE)
{
}

Form::Form(std::string name, bool is_signed, const int req_sign, const int req_exe) : name_(name), is_signed_(is_signed), req_sign_(req_sign), req_exe_(req_exe)
{

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

void Form::GradeTooHighException(const std::string msg) const
{
	throw std::out_of_range(msg);
}

void Form::GradeTooLowException(const std::string msg) const
{
	throw std::out_of_range(msg);
}

void Form::NotSignedException(const std::string msg) const
{
	throw (msg);
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
		Form::GradeTooLowException(EXCEPTION);
	is_signed_ = true;
}

bool Form::isSigned(const Bureaucrat &exe) const
{
	if (getIsSigned() == false)
		Form::NotSignedException(EXCEPTION2);
	else if (exe.getGrade() > getReqExe())
		Form::GradeTooLowException(EXCEPTION);
	return true;
}
