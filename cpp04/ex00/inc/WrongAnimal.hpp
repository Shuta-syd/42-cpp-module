/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:49:58 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 19:47:03 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONGANIMAL_HPP)
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string);
	WrongAnimal(const WrongAnimal&);
	~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &);

	void makeSound(void) const;
	std::string getType(void) const;

protected:
	std::string type_;
};

#endif // WRONGANIMAL_HPP
