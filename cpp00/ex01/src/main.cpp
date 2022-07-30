/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:32:12 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 18:53:57 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int main(void)
{
	PhoneBook phone_book;
	std::string input;

	std::cout << "Welcome to PhoneBook! Please select commands!!\n"
			  << "[ADD] -> you can add contact to book\n"
			  << "[SEARCH] -> you can for contact\n"
			  << "[EXIT] -> you can terminate this\n\n";
	while (42)
	{
		std::cout << "command > ";
		std::cin >> input;
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.search_contact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
