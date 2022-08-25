/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:20:01 by shogura           #+#    #+#             */
/*   Updated: 2022/08/24 18:56:57 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include <Bureaucrat.hpp>
#define MAX_GRADE 1
#define MIN_GRADE 150
#define EXCEPTION "[Exception] Grade is too low"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string, bool, const int, const int);
	Form(const Form &);
	~Form();

	Form &operator=(const Form &other);

	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getReqSign(void) const;
	int getReqExe(void) const;

	void beSigned(const Bureaucrat &);

private:
	void GradeTooHighException(const std::string);
	void GradeTooLowException(const std::string);

	const std::string name_;
	bool is_signed_;
	const int req_sign_;
	const int req_exe_;
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif // FORM_HPP
