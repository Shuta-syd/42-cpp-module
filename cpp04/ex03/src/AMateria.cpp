/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:19:35 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 14:32:19 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->type_ = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type_ = other.type_;
	return *this;
}


