/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:19:13 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 19:48:36 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string);
	Animal(const Animal &);
	~Animal();

	Animal &operator=(const Animal &);

	void makeSound(void) const;
	std::string getType(void) const;

protected:
	std::string type_;
};

#endif // ANIMAL_HPP
