/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:07:47 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 15:07:49 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>

/*
__attribute__((destructor))
static void destructor(void)
{
	system("leaks -q zombieee");
}
*/

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << str << std::endl
			  << *stringPTR << std::endl
			  << stringREF << std::endl;

	std::cout << &str << std::endl
			  << stringPTR << std::endl
			  << &stringREF << std::endl;

	str = "hi men I'm good";
	std::cout << str << std::endl
			  << *stringPTR << std::endl
			  << stringREF << std::endl;
	return 0;
}
