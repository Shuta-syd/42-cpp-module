/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:51:24 by shogura           #+#    #+#             */
/*   Updated: 2022/08/20 21:46:24 by shogura          ###   ########.fr       */
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
	//Animalクラス単体の場合はコンパイルエラー出す
	// const Animal *animal = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;
	// delete animal;

	Dog *test = new Dog();
	test->makeSound();
	test->Animal::makeSound();
	delete test;
	return 0;
}
