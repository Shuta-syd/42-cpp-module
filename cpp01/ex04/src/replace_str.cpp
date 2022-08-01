/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:23:40 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 09:55:32 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace_str.hpp>

replace_str::replace_str(std::string before, std::string after) :  _before(before), _after(after)
{

}

replace_str::replace_str()
{
}

replace_str::~replace_str()
{
}

bool replace_str::empty(void)
{
	if (_before.empty() || _after.empty())
	{
		std::cerr << "[Error]:before or after is empty" << std::endl;
		return true;
	}
	return false;
}
