/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 12:22:18 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(void)
{
	ClapTrap claptrap("42man");

	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.takeDamage(1000);
	claptrap.attack("nature");
	claptrap.attack("nature");
	claptrap.beRepaired(10);
	claptrap.beRepaired(10);
	claptrap.beRepaired(10);
	claptrap.beRepaired(10);

	return 0;
}
