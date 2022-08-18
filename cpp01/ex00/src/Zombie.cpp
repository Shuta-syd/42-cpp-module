<<<<<<< HEAD

=======
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/07/31 17:06:00 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 17:50:20 by shogura          ###   ########.fr       */
=======
/*   Created: 2022/07/31 17:52:38 by shogura           #+#    #+#             */
/*   Updated: 2022/08/10 20:48:07 by shogura          ###   ########.fr       */
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

<<<<<<< HEAD
void Zombie::announce(void) const
=======
void Zombie::announce(void) const 
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
