/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:32:12 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 16:26:46 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <Contact.hpp>

int main(void)
{
	PhoneBook phone_book;

	std::cout << "Welcome to PhoneBook! Please select commands\n"
			  << "ADD -> you can add contact to book\n"
			  << "SEARCH -> you can for contact\n"
			  << "EXIT -> you can terminate this\n";
	return 0;
}
