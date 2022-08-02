/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:24:40 by shogura           #+#    #+#             */
/*   Updated: 2022/08/02 20:04:26 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "[Usage]: ./harlFilter filter argument"
				  << std::endl;
		return 1;
	}

	harl.complain(argv[1]);
	return 0;
}
