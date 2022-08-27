/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:08 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 21:51:38 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BUREAUCRAT_HPP)
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <Form.hpp>

#define MAX_GRADE 1
#define MIN_GRADE 150
#define HighException "[Exception] Grade is too high"
#define LowException "[Exception] Grade is too low"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &);

	void incrementGrade(void);
	void decrementGrade(void);

	std::string getName(void) const;
	int getGrade(void) const;

	void signForm(Form &) const ;
	void executeForm(Form const &);

private:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	const std::string name_;
	int grade_;
};

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif // BUREAUCRAT_HPP
