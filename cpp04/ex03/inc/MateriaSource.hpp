/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:07:32 by shogura           #+#    #+#             */
/*   Updated: 2022/08/22 14:51:48 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MATERIASOURCE_HPP)
#define MATERIASOURCE_HPP

#include <IMateriaSource.hpp>
#include <iostream>

class MateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &);

private:
	AMateria *materia_[4];
};

#endif // MATERIASOURCE_HPP
