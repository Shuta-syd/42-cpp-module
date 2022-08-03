/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:45:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/03 23:44:28 by shogura          ###   ########.fr       */
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

bool isNumeric(std::string const &str)
{
	return !str.empty() && str.find_first_not_of("0123456789") == std::string::npos;
}

void PhoneBook::search_contact(void)
{
	std::string input;
	int index;

	if (this->_index == 0)
	{
		std::cout << "No Data" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_index && i < 8; i++)
		contact[i].display_contact_header();
	while (!isNumeric(input))
	{
		std::cout << "Index: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(1);
	}
	index = std::atoi(input.c_str());
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
