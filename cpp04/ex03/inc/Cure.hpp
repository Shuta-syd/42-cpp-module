/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:20:00 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 14:59:14 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(Cure_HPP)
#define Cure_HPP

#include <AMateria.hpp>
#include <string>
#include <iostream>

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(const Cure&);
	~Cure();

	Cure &operator=(const Cure &);

	AMateria *clone(void) const;
	void use(ICharacter &);
};

#endif // Cure_HPP
