/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:58:54 by shogura           #+#    #+#             */
/*   Updated: 2022/08/03 23:37:02 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP

#include <Contact.hpp>
#include <algorithm>
#include <cstdlib>

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
