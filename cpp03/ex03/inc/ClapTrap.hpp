/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:56 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 20:10:31 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void pause_action(void);

protected:
	std::string _name;
	int _hp;
	int _ep;
	int _atk;
};

#endif // ClapTrap_HPP

/*
https://gamedev.stackexchange.com/questions/114375/error-no-default-constructor-exists-for-sprite
*/
