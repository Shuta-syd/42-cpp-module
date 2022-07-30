/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:45:57 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 18:50:49 by shogura          ###   ########.fr       */
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
	std::cout << "coming soon\n";
}

PhoneBook::PhoneBook() : index(0)
{
}

PhoneBook::~PhoneBook()
{
}
