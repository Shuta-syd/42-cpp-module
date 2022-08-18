/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:45:47 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 20:32:51 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CAT_HPP)
#define CAT_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string);
	Cat(const Cat &);
	~Cat();

	Cat &operator=(const Cat &);

private:
	Brain *brain_;
};

#endif // CAT_HPP
