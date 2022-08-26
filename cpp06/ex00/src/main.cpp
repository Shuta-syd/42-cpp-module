/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:34:07 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 21:55:14 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <TypeConvert.hpp>
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		class TypeConvert type(argv[1]);
		type.converter();
	}
	else
		std::cerr << "[Usage] ./convert [numeric or character value]" << std::endl;
	return 0;
}
