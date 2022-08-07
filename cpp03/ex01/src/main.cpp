/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 18:19:55 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int main(void)
{
	ScavTrap man_42("man_42");

	man_42.attack("nature");
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.takeDamage(1000);
	man_42.attack("nature");
	man_42.attack("nature");
	man_42.beRepaired(10);
	man_42.beRepaired(10);
	man_42.beRepaired(10);
	man_42.beRepaired(10);

	return 0;
}
