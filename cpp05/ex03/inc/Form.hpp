/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:20:01 by shogura           #+#    #+#             */
/*   Updated: 2022/08/29 19:41:25 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include <Bureaucrat.hpp>
#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string, const int, const int);
	Form(const Form &);
	virtual ~Form();

	Form &operator=(const Form &other);

	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getReqSign(void) const;
	int getReqExe(void) const;

	void beSigned(const Bureaucrat &);
	bool isSigned(const Bureaucrat &) const ;
	virtual void execute(Bureaucrat const &executor) const = 0;

private:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class NotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};

	const std::string name_;
	bool is_signed_;
	const int req_sign_;
	const int req_exe_;
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif // FORM_HPP
