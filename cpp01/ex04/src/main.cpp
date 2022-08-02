/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:24:43 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 12:20:15 by shogura          ###   ########.fr       */
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
	files[0].r_open(filename);
	files[1].w_open(filename + ".replace");
	replace_str.replace(files[0].get_file_stream(), files[1].get_file_stream());
	files[0].close();
	files[1].close();
	return 0;
}
