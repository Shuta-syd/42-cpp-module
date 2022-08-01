/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:24:43 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 10:59:39 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace_str.hpp>
#include <c_file.hpp>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::string filename;
	c_file files[2];
	replace_str replace_str(argv[2], argv[3]);

	std::cout << "[Usage]: filename before after" << std::endl;
	if(replace_str.empty())
		return 1;
	filename = std::string(argv[1]);
	files[1].r_open(filename);
	files[2].w_open(filename + ".replace");
	


	return 0;
}
