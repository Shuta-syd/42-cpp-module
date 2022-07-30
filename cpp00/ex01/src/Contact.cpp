/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:59:53 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 16:05:13 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void Contact::set_info(int index)
{
	this->index = index;
	for (int i = FirstName; i < DarkestSecret; i++)
	{
		std::cout << info_name(i) << ": ";
		std::cin >> info[i];
	}
}

std::string Contact::info_name(int i)
{
	if (i == FirstName)
		return ("FirstName");
	else if (i == LastName)
		return ("LastName");
	else if (i == NickName)
		return ("NickName");
	else if (i == PhoneNumber)
		return ("PhoneNumber");
	else if (i == DarkestSecret)
		return ("DarkestSecret");
	return (NULL);
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
