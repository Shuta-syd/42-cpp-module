/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:19:13 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 13:08:01 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{

public:
	Animal(const Animal &);
	virtual ~Animal();

	Animal &operator=(const Animal &);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

protected:
	Animal();
	Animal(std::string);
	std::string type_;
};

#endif // ANIMAL_HPP
