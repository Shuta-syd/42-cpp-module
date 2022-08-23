/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:25:06 by shogura           #+#    #+#             */
/*   Updated: 2022/08/23 17:39:07 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "[ScavTrap] Default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_atk = 20;
	std::cout << "[ScavTrap] Default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cp)
{
	*this = cp;
	std::cout << "[ScavTrap] Copy constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor is called" << std::endl;
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
