/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:07:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 20:31:40 by shogura          ###   ########.fr       */
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
	(void)cp;
	return *this;
}
