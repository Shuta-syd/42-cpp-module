/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:19:16 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 19:47:41 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
	std::cout << "[WrongAnimal] Default Constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
	std::cout << "[WrongAnimal] Default Constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	std::cout << "[WrongAnimal] copy Constructor is called" << std::endl;
	*this = cp;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp)
{
	type_ = cp.type_;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << type_ << " making wrong noise >>>>>>>>>>>>" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type_;
}
