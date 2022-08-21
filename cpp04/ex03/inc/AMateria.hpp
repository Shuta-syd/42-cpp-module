/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:55:01 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 14:40:26 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(AMATERIA_HPP)
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <ICharacter.hpp>

class AMateria
{
public:
	AMateria();
	AMateria(std::string const &);
	AMateria(const AMateria &);
	~AMateria();

	AMateria &operator=(const AMateria &);

	std::string const &getType() const; // Returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string type_;
};

#endif // AMATERIA_HPP
