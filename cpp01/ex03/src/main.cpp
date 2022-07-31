/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:25:34 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 03:23:20 by shogura          ###   ########.fr       */
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
	{
		Weapon club = Weapon("crude spiked club");
		/*
			値渡しの場合clubが渡されるわけではなくコピーのため、
			clubを変更しても反映されない（値渡しの場合）
		*/
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
