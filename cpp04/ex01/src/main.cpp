/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 13:10:58 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <Brain.hpp>

__attribute__((destructor))
static void destructor(void)
{
	system("leaks -q ex01");
}

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;

		Dog *test = new Dog();
		test->makeSound();
		test->Animal::makeSound();
		delete test;
	}
	{
		Animal *test[4];
		test[0] = new Dog();
		test[1] = new Dog();
		test[2] = new Cat();
		test[3] = new Cat();
		for (size_t i = 0; i < 4; i++)
		{
			test[i]->makeSound();
			delete test[i];
		}
	}
	return 0;
}
