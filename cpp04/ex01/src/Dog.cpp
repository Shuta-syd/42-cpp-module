/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:48:48 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 13:53:31 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal("Dog"), brain_(new Brain)
{
	std::cout << "[Dog] Default Constructor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), brain_(new Brain())
{
	std::cout << "[Dog] Constructor is called" << std::endl;
}

Dog::Dog(const Dog &cp)
{
	std::cout << "[Dog] copy Constructor is called" << std::endl;
	*this = cp;
}

Dog::~Dog()
{
	delete brain_;
	std::cout << "[Dog] Destructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &cp)
{
	brain_ = cp.brain_;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "[Dog] making some noise .............." << std::endl;
}
