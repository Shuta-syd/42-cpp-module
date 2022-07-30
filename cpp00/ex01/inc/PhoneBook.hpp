/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:58:54 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 20:26:37 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP

#include <iostream>
#include <Contact.hpp>

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void add_contact(void);
	void search_contact(void);
private:
	int _index;
	Contact contact[8];
};

#endif // PHONEBOOK_HPP
