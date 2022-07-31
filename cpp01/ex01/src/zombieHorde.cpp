/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:20:06 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 18:33:15 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];

	if (zombies == nullptr)
	{
		std::cerr << "[error]: could not new Zombie class instance" << std::endl;
		return (nullptr);
	}
	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}
