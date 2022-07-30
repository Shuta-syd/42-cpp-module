/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:00:01 by shogura           #+#    #+#             */
/*   Updated: 2022/07/30 19:30:40 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONTACT_HPP)
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	~Contact();
	void set_info(int index);
	std::string info_name(int i);
	int get_index();

private:
	std::string info[5];
	int index;
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
