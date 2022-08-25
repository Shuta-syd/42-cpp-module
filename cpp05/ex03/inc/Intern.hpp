/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:22:50 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 19:19:35 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(INTERN_HPP)
#define INTERN_HPP

#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

class Intern
{
public:
	Intern();
	Intern(const Intern &);
	~Intern();

	Intern &operator=(const Intern &);

	int getFormIdx(std::string &);
	Form *makeForm(std::string, std::string);

private:
	static const std::string formTypes_[3];
};

#endif // INTERN_HPP
