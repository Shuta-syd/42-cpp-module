

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:45:41 by shogura           #+#    #+#             */
/*   Updated: 2022/07/29 09:25:39 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char const *argv[])
{
	int	i = 0;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 0; i < argc; i++)
		{
			std::string str(argv[i]);
			std::cout << std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
