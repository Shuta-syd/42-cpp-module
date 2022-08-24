/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:08 by shogura           #+#    #+#             */
/*   Updated: 2022/08/24 17:15:23 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BUREAUCRAT_HPP)
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

private:
	void GradeTooHighException(const std::string);
	void GradeTooLowException(const std::string);
	const std::string name_;
	int grade_;
};

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif // BUREAUCRAT_HPP
