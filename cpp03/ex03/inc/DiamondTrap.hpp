/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:14:29 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 22:26:30 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DIAMONDTRAP_HPP)
#define DIAMONDTRAP_HPP

#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <ClapTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap &);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &);

	void whoAmI(void);
	void attack(std::string);

private:
	std::string _name;
};

#endif // DIAMONDTRAP_HPP
