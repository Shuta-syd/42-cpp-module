/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:49:11 by shogura           #+#    #+#             */
/*   Updated: 2022/08/08 11:54:53 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "[Cat] Default Constructor is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	_type = type;
	std::cout << "[Cat] Default Constructor is called" << std::endl;
}

Cat::Cat(const Cat &cp)
{
	std::cout << "[Cat] copy Constructor is called" << std::endl;
	*this = cp;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor is called" << std::endl;
}

Cat &Cat::operator=(const Cat &cp)
{
	(void)cp;
	return *this;
}
