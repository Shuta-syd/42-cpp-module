/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:26:25 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 23:07:57 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include <ICharacter.hpp>

class Character : public ICharacter
{
public:
	Character();
	Character(std::string );
	Character(const Character &);
	~Character();

	Character &operator=(const Character &);

	std::string const &getName() const;
	void equip(AMateria *);
	void unequip(AMateria *);
	void use(int, ICharacter &);

private:
	std::string type_;
	AMateria *inventory_[4];
};

#endif // CHARACTER_HPP
