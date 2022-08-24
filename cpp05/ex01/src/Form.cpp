/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:20:21 by shogura           #+#    #+#             */
/*   Updated: 2022/08/24 18:08:52 by shogura          ###   ########.fr       */
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

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() < req_sign_)
		Form::GradeTooLowException(EXCEPTION);
	is_signed_ = true;
}
