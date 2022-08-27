/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:07:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 15:06:35 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& cp)
{
	*this = cp;
	std::cout << "[Brain] Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain& cp)
{
	for (size_t i = 0; i < 100; i++)
		ideas_[i] = cp.ideas_[i];
	return *this;
}
