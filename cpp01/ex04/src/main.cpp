/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:24:43 by shogura           #+#    #+#             */
/*   Updated: 2022/08/02 14:58:03 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace_str.hpp>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr << "[Usage]:./replace filename before after" << std::endl;
		return 1;
	}
	std::string filename(argv[1]);
	std::ifstream file_in(filename);
	std::ofstream file_out(filename + ".replace");
	replace_str replace_str(argv[2], argv[3]);

	if (!file_in)
	{
		std::cerr << "[Error]:Could not open the file" << std::endl;
		return 1;
	}
	else if (!file_out)
	{
		std::cerr << "[Error]:Could not open the file" << std::endl;
		file_in.close();
		return 1;
	}
	replace_str.replace(file_in, file_out);
	file_in.close();
	file_out.close();
	return 0;
}
