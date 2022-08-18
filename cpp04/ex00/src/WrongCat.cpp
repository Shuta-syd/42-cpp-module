/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:51:04 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 19:56:58 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default Constructor is called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	type_ = type;
	std::cout << "[WrongCat] Default Constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cp)
{
	std::cout << "[WrongCat] copy Constructor is called" << std::endl;
	*this = cp;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor is called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cp)
{
	(void)cp;
	return *this;
}
