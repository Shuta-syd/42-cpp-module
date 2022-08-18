/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:25:34 by shogura           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/18 14:51:58 by shogura          ###   ########.fr       */
=======
/*   Updated: 2022/08/12 20:03:27 by shogura          ###   ########.fr       */
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>
#include <cstdlib>

/*
__attribute__((destructor))
static void destructor(void)
{
	system("leaks -q violence");
}
*/
int main()
{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

		Weapon club2 = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();
<<<<<<< HEAD
	}
	return 0;
=======
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
}
