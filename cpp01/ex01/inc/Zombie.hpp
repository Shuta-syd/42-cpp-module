/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:05:58 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 18:46:39 by shogura          ###   ########.fr       */
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
	void announce(void) const;
	void set_name(std::string);

private:
	std::string _name;
};

#endif
