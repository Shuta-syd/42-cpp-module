/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:26:33 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 02:57:22 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string new_type) : _type(new_type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
