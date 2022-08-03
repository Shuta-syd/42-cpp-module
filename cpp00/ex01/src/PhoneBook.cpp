/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:45:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/03 19:47:12 by shogura          ###   ########.fr       */
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
	contact[_index % 8].set_info(_index % 8);
	_index++;
	std::cout << "\033[32mContact succv essfully added.\033[m" << std::endl;
}

void PhoneBook::search_contact(void)
{
	long index;

	if (this->_index == 0)
	{
		std::cout << "No Data" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_index; i++)
		contact[i].display_contact_header();
	std::cout << "Index: ";
	std::cin >> index;
	if (std::cin.eof())
		std::exit(1);
	for (int i = 0; i < 8; i++)
	{
		if (index == contact[i].get_index() && index > 0)
		{
			contact[i].display_contact_all();
			return;
		}
	}
	if (index > 8)
		std::cout << "This index is out of range" << std::endl;
	else
		std::cout << "This index is not exist" << std::endl;
}
