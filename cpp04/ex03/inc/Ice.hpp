/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:20:00 by shogura           #+#    #+#             */
/*   Updated: 2022/08/21 14:59:14 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ICE_HPP)
#define ICE_HPP

#include <AMateria.hpp>
#include <string>
#include <iostream>

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(const Ice&);
	~Ice();

	Ice &operator=(const Ice &);

	AMateria *clone(void) const;
	void use(ICharacter &);
};

#endif // ICE_HPP
