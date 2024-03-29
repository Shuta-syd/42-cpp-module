/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:05:37 by shogura           #+#    #+#             */
/*   Updated: 2022/08/22 16:24:37 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined(IMATERIASOUCE_HPP)
#define IMATERIASOUCE_HPP

#include <AMateria.hpp>
#include <string>

class IMateriaSource
{
public:
	virtual ~IMateriaSource(){};
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif // IMATERIASOUCE_HPP
