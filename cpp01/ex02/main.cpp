/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:06:06 by shogura           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/18 14:46:19 by shogura          ###   ########.fr       */
=======
/*   Updated: 2022/08/08 16:51:37 by shogura          ###   ########.fr       */
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
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
