/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:23:40 by shogura           #+#    #+#             */
/*   Updated: 2022/08/09 14:12:05 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace_str.hpp>

replace_str::replace_str(std::string before, std::string after) :  _before(before), _after(after)
{
}

replace_str::replace_str()
{
}

replace_str::~replace_str()
{
}

void replace_str::replace(std::ifstream& r_file, std::ofstream& w_file)
{
	std::string line;
	std::size_t index = 0;

	while (std::getline(r_file, line))
	{

		while ((index = line.find(_before)) != std::string::npos)
		{
				line.erase(index, _before.length());
				line.insert(index, _after);
		}
		w_file << line;
		w_file << std::endl;
	}
}
