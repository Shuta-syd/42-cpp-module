/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:24:43 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 10:53:51 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace_str.hpp>
#include <c_file.hpp>
#include <fstream>

int main(int argc, char const *argv[])
{
	c_file *files[2] new;
	replace_str replace_str(argv[2], argv[3]);

	std::cout << "[Usage]: filename before after" << std::endl;
	files[1]->open(argv[1]);
	files[2].open();

	return 0;
}
