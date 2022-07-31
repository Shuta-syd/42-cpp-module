/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:11:42 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 17:48:56 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(void)
{
	std::cout << "----------this is heap zombie----------" << std::endl;
	Zombie *heap_zombie = newZombie("heap");
	heap_zombie->announce();
	delete heap_zombie;

	std::cout << "----------this is stack zombie----------" << std::endl;
	randomChump("stack");

	return 0;
}
