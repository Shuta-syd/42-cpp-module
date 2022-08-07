/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CLapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:45 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 12:22:34 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	*this = cp;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp)
{
	(void)cp;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_ep <= 0)
		return (pause_action());
	else if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
		return;
	}
	_ep--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			  << _atk << " point of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
	_hp -=  amount;
	std::cout << "ClapTrap " << _name << " is taken " << amount
			  << " point of damage" << std::endl;
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep < 0)
		return (pause_action());
	else if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is died" << std::endl;
		return;
	}
	_ep--;
	_hp = amount;
	std::cout << "ClapTrap " << _name << " is repaired " << amount
			  << " point of hp" << std::endl;
}

void ClapTrap::pause_action(void)
{
	std::cout << "ClapTrap " << _name << " doesn't have energy point" << std::endl;
}
