/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:27:38 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 03:08:19 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include <Weapon.hpp>

class HumanA
{
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack(void);

private:
	Weapon &_weapon;
	std::string _name;
};

#endif
