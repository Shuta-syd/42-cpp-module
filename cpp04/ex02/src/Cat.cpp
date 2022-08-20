/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:49:11 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 21:26:51 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal("Cat"), brain_(new Brain())
{
	std::cout << "[Cat] Default Constructor is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), brain_(new Brain())
{
	std::cout << "[Cat] Constructor is called" << std::endl;
}

Cat::Cat(const Cat &cp)
{
	std::cout << "[Cat] copy Constructor is called" << std::endl;
	*this = cp;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "[Cat] Destructor is called" << std::endl;
}

Cat &Cat::operator=(const Cat &cp)
{
	(void)cp;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "[Cat] making some noise .............." << std::endl;
}
