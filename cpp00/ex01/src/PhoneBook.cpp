/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:45:57 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 20:11:18 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void PhoneBook::add_contact(void)
{
	contact[index].set_info(index);
	index++;
	std::cout << "\033[32mContact successfully added.\033[m" << std::endl;
}

void PhoneBook::search_contact(void)
{
	int index;

	std::cout << "Index: ";
	std::cin >> index;
	for (int i = 0; i < 8; i++)
	{
		if (index == contact[i].get_index())
		{
			contact[i].display_contact();
			return ;
		}
	}
	if (index > 8)
		std::cout << "This index is out of range" << std::endl;
	else
		std::cout << "This index is not exist" << std::endl;
}

PhoneBook::PhoneBook() : index(0)
{
}

PhoneBook::~PhoneBook()
{
}
