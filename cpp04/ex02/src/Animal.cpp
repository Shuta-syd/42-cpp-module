/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:19:16 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 13:55:32 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type_("Animal")
{
	std::cout << "[Animal] Default Constructor is called" << std::endl;
}

Animal::Animal(std::string type) : type_(type)
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
	type_ = cp.type_;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type_;
}
