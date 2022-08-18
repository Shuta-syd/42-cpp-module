/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:23:40 by shogura           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/18 15:02:47 by shogura          ###   ########.fr       */
=======
/*   Updated: 2022/08/09 14:12:05 by shogura          ###   ########.fr       */
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
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
<<<<<<< HEAD
		index = line.find(_before);
		if (index != std::string::npos)
=======

		while ((index = line.find(_before)) != std::string::npos)
>>>>>>> 8a4efe257570a555d7df3c3cf8e800686bd30a6f
		{
				line.erase(index, _before.length());
				line.insert(index, _after);
		}
		w_file << line;
		w_file << std::endl;
	}
}
