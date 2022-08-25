/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:09:40 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 16:24:34 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include <Form.hpp>
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	std::string getTarget(void) const;
	void execute(Bureaucrat const &executor) const;

private:
	std::string target_;
	static const char * asciiTree;
};

#endif // SHRUBBERYCREATIONFORM_HPP
