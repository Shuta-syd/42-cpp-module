/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:09:40 by shogura           #+#    #+#             */
/*   Updated: 2022/08/25 15:26:12 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include <Form.hpp>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

	std::string getTarget(void) const;
	void execute(Bureaucrat const &executor) const;

private:
	std::string target_;
};

#endif // PRESIDENTIALPARDONFORM_HPP
