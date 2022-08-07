/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 21:52:02 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main(void)
{
	DiamondTrap man_42("main_42");

	man_42.attack("good wood");
	man_42.attack("good wood");
	man_42.attack("good wood");
	man_42.attack("good wood");
	man_42.attack("good wood");
	man_42.whoAmI();
	man_42.beRepaired(100);
	man_42.guardGate();
	man_42.highFivesGuys();
	man_42.takeDamage(1000);
	man_42.attack("good wood");
	man_42.attack("good wood");
	return 0;
}
