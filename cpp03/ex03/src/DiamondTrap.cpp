/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:14:59 by shogura           #+#    #+#             */
/*   Updated: 2022/08/23 17:45:38 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : FragTrap()
{
	std::cout << "[DiamondTrap] Default constructor is called" << std::endl;
	ClapTrap::_name += "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_hp;
	this->_atk = FragTrap::_hp;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name)
{
	std::cout << "[DiamondTrap] Default constructor is called" << std::endl;
	ClapTrap::_name =  name + "_clap_name";
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = SravTrap::_hp;
	this->_atk = FragTrap::_hp;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp)
{

	std::cout << "[DiamondTrap] Copy constructor is called" << std::endl;
	*this = cp;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor is called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cp)
{
	(void)cp;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	if (_hp <= 0)
	{
		std::cout << "DiamondTrap " << _name << " is died" << std::endl;
		return;
	}
	std::cout << "ClapTrap name is " << ClapTrap::_name
			  << "and DiamondTrap name is " << this->_name << std::endl;
}


void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
