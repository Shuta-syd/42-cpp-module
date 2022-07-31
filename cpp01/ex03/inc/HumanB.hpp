/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:28:15 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 03:11:39 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include <Weapon.hpp>

class HumanB
{
public:
	HumanB(std::string);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon&);

private:
	Weapon *_weapon;
	std::string _name;
};

#endif
