/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:00:01 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 13:30:53 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONTACT_HPP)
#define CONTACT_HPP


#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
public:
	Contact();
	~Contact();
	int get_index(void);
	void set_info(int index);
	void display_contact_header(void);
	void display_contact_all(void);
	std::string slice(std::string str);
	std::string info_name(int i);

private:
	std::string _info[5];
	int _index;
	enum
	{
		FirstName,
		LastName,
		NickName,
		PhoneNumber,
		DarkestSecret
	};
};

#endif // CONTACT_HPP
