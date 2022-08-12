/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:19:16 by shogura           #+#    #+#             */
/*   Updated: 2022/08/08 11:53:33 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : _type("Animal")
{
	std::cout << "[Animal] Default Constructor is called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "[Animal] Default Constructor is called" << std::endl;
}

Animal::Animal(const Animal &cp)
{
	std::cout << "[Animal] copy Constructor is called" << std::endl;
	*this = cp;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor is called" << std::endl;
}

Animal &Animal::operator=(const Animal &cp)
{
	(void)cp;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << _type <<  " making some noise .............." << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}
