/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:46:39 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 21:17:52 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DOG_HPP)
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string);
	Dog(const Dog &);
	~Dog();

	Dog &operator=(const Dog &);

	void makeSound(void) const;

private:
	Brain *brain_;
};

#endif // DOG_HPP
