/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:26:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 13:29:41 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ICHARACTER_HPP)
#define ICHARACTER_HPP

#include <string>
#include <AMateria.hpp>

class ICharacter
{
private:
	/* data */
public:
	ICharacter(/* args */);
	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};


#endif // ICHARACTER_HPP
