/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:48:48 by shogura           #+#    #+#             */
/*   Updated: 2022/08/09 15:03:42 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	_type = "Dog";
	std::cout << "[Dog] Default Constructor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	_type = type;
	std::cout << "[Dog] Default Constructor is called" << std::endl;
}

Dog::Dog(const Dog &cp)
{
	std::cout << "[Dog] copy Constructor is called" << std::endl;
	*this = cp;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &cp)
{
	(void)cp;
	return *this;
}

void Dog::makeSound(void)
{

}

/*
0100 0001

*/
