/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:19:59 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 14:59:41 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice()
{
	std::cout << "[Ice] Default Constructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
	std::cout << "[Ice] Copy Constructor called" << std::endl;
	*this = other;
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	(void)other;
	return *this;
}

AMateria *Ice::clone(void) const {
	AMateria *clone = new Ice();

	return (clone);
}

void Ice::use(ICharacter &target){
	
}
