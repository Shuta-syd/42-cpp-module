/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:26:19 by shogura           #+#    #+#             */
/*   Updated: 2022/08/22 14:54:09 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character()
{
	std::cout << "[Character] Default Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory_[i] = 0;
}

Character::Character(std::string type) : type_(type)
{
	std::cout << "[Character] Pram Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory_[i] = 0;
}

Character::Character(const Character &other)
{
	for (size_t i = 0; i < 4; i++)
		if (inventory_[i] != 0)
			delete inventory_[i];
	std::cout << "[Character] Copy Constructor called" << std::endl;
	*this = other;
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
		if (inventory_[i] != 0)
			delete inventory_[i];
	std::cout << "[Character] Destructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	this->type_ = other.getName();
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory_[i];
		if (other.inventory_[i])
			this->inventory_[i] = other.inventory_[i];
		else
			this->inventory_[i] = 0;
	}

	return *this;
}

std::string const &Character::getName() const
{
	return type_;
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
		if (inventory_[i] = 0)
		{
			inventory_[i] = m;
			std::cout << "Materia is equipped" << std::endl;
			return;
		}
	std::cout << "Inventory is full, Materia is equipped" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		std::cout << "Invalid Index" << std::endl;
	else if (inventory_[idx] != 0)
	{
		inventory_[idx] = 0;
		std::cout << "Materia in this index is unset" << std::endl;
	}
	else
		std::cout << "There's Materia in this index" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4)
		std::cout << "Invalid Index" << std::endl;
	else if (inventory_[idx] != 0)
		inventory_[idx]->use(target);
	else
		std::cout << "There isn't Materia in this index" << std::endl;
}
