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
	size_t	i;
	size_t	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 0; i < argc; i++)
		{
			std::string str(argv[i]);
			for (j = 0; j < str.length(); j++)
				std::cout << std::toupper(str[j]) << std::endl;
		}
	}
	return (0);
}
