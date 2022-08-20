/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 21:28:24 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <Brain.hpp>

// __attribute__((destructor))
// static void destructor(void)
// {
// 	system("leaks -q ex01");
// }

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; // should not create a leak
	delete i;

	Dog *test = new Dog();
	test->makeSound();
	test->Animal::makeSound();
	delete test;
	return 0;
}
