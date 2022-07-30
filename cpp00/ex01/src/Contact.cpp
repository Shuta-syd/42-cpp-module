/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:59:53 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 18:50:55 by shogura          ###   ########.fr       */
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

Contact::Contact()
{
}

Contact::~Contact()
{
}
