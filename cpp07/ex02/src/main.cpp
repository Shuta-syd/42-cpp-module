/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:31:05 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 14:54:20 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <cstdlib>

int main(void)
{
	try
	{
		{
			Array<int> nm(10);
			srand(time(NULL));
			for (uint i = 0; i < 10; i++)
			{
				int n = rand();
				nm[i] = n;
				std::cout << "nm-> " << nm[i] << std::endl;
			}
			Array<int> cp(nm);
			for (size_t i = 0; i < 10; i++)
			{
				if (&cp[i] == &nm[i])
					std::cout << "same address. it's no good" << std::endl;
			}
			nm[1000];
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
