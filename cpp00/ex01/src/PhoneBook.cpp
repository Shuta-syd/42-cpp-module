/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:45:57 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 20:37:37 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

PhoneBook::PhoneBook() : _index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(void)
{
	contact[_index].set_info(_index);
	_index++;
	std::cout << "\033[32mContact successfully added.\033[m" << std::endl;
}

void PhoneBook::search_contact(void)
{
	int input;

	if (this->_index == 0)
	{
		std::cout << "No Data" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_index; i++)
		contact[i].display_contact_header();
	std::cout << "Index: ";
	std::cin >> input;
	for (int i = 0; i < 8; i++)
	{
		if (input == contact[i].get_index())
		{
			contact[i].display_contact_all();
			return;
		}
	}
	if (input > 8)
		std::cout << "This index is out of range" << std::endl;
	else
		std::cout << "This index is not exist" << std::endl;
}
