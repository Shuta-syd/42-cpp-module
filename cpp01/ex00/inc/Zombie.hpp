/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:05:58 by shogura           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/18 14:45:06 by shogura          ###   ########.fr       */
=======
/*   Updated: 2022/08/10 20:48:42 by shogura          ###   ########.fr       */
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
class Zombie
{
public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void announce(void) const ;

private:
	std::string _name;

};

#endif
