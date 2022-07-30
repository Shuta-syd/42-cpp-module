/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:59:53 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 20:19:42 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void Contact::set_info(int index)
{
	this->index = index + 1;
	for (int i = FirstName; i < DarkestSecret; i++)
	{
		std::cout << info_name(i) << ": ";
		std::cin >> info[i];
		if (info[i].empty())
		{
			std::cout << "empty is not valid\n"
					  << "retry : ";
			std::cin >> info[i];
		}
	}
}

std::string Contact::info_name(int i)
{
	if (i == FirstName)
		return ("First name");
	else if (i == LastName)
		return ("Last name");
	else if (i == NickName)
		return ("Nick name");
	else if (i == PhoneNumber)
		return ("Phone number");
	else if (i == DarkestSecret)
		return ("Darkest secret");
	return (NULL);
}

int Contact::get_index(void)
{
	return this->index;
}

std::string Contact::slice(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Contact::display_contact_header(void)
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << slice(info[FirstName]);
	std::cout << "|" << std::setw(10) << slice(info[LastName]);
	std::cout << "|" << std::setw(10) << slice(info[NickName])
			  << "|"<< std::endl;
}

void Contact::display_contact_all(void)
{
	for (int i = FirstName; i < DarkestSecret; i++)
		std::cout << info_name(i) << ": " << info[i] << std::endl;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
