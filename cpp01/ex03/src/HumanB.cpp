/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:28:42 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 03:11:29 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string new_name)
	: _weapon(nullptr), _name(new_name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	this->_weapon = &new_weapon;
}
