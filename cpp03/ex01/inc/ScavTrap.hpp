/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:25:15 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 20:11:47 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &);

	void attack(const std::string &target);
	void guardGate(void);
};

#endif // SCAVTRAP_HPP
