/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:25:06 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 18:18:42 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : _name(""), _hp(100), _ep(50), _atk(20)
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _ep(50), _atk(20)
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cp)
{
	*this = cp;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap&cp)
{
	(void)cp;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_ep <= 0)
		return (pause_action());
	else if (_hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " is died" << std::endl;
		return;
	}
	_ep--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
			  << _atk << " point of damage" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now Gate keeper mode" << std::endl;
}
