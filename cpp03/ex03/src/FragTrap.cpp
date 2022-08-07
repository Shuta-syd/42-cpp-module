/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:23:44 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 20:50:07 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap()
{
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "FragTrap Default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name ) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_atk = 30;
	std::cout << "FragTrap Default constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cp)
{
	*this = cp;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor is called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cp)
{
	(void)cp;
	(void)cp._ep;
	(void)cp._atk;

	return *this;
}

void FragTrap::highFivesGuys(void)
{

	if (_hp <= 0)
	{
		std::cout << "FragTrap " << _name << " is died" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " is trying to high-fives." << std::endl;
}
