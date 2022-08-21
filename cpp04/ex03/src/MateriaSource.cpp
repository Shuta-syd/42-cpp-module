/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:07:23 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 22:10:29 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "[MateriaSource] Copy Constructor called" << std::end;
	*this = other;
}

MateriaSource::~MateriaSource(){
	std::cout << "[MateriaSource] Destructor called"}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	(void)other;
	return *this;
}
