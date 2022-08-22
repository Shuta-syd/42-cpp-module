/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:07:23 by shogura           #+#    #+#             */
/*   Updated: 2022/08/22 16:33:55 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] Default Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		materia_[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "[MateriaSource] Copy Constructor called" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource(){
	std::cout << "[MateriaSource] Destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (materia_[i] != 0)
			delete materia_[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->materia_[i];
		if (other.materia_[i])
			this->materia_[i] = other.materia_[i];
		else
			this->materia_[i] = 0;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *target)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (materia_[i] == 0)
		{
			materia_[i] = target;
			std::cout << "[MateriaSource] MateriaSource learn Materia" << std::endl;
			return;
		}
	}
	std::cout << "[MateriaSource] MateriaSource cannot learn more Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (materia_[i] && materia_[i]->getType() == type)
			return materia_[i]->clone();
	}
	std::cout << "[MateriaSource] Unknow materia type" << std::endl;
	return 0;
}
