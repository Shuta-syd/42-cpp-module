/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:19:59 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 22:33:58 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria("cure")
{
	std::cout << "[Cure] Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	std::cout << "[Cure] Copy Constructor called" << std::endl;
	*this = other;
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	(void)other;
	return *this;
}

AMateria *Cure::clone(void) const
{
	AMateria *clone = new Cure();

	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << this->getType() << ">’s wounds *" << std::endl;
}
