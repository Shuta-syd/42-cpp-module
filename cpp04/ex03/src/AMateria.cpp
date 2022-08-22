/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:19:35 by shogura           #+#    #+#             */
/*   Updated: 2022/08/22 17:29:40 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria()
{
	std::cout << "[AMateria] Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type)
{
	std::cout << "[AMateria] Param Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "[AMateria] Copy Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type_ = other.type_;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->type_;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "A materia used on " << target.getName() << std::endl;
}
