/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:20:23 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 18:53:43 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
	Zombie *
	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *zombies = zombieHorde(5,"zombie man");

	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}
