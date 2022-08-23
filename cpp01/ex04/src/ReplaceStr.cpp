/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:09:29 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 15:09:31 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ReplaceStr.hpp>

ReplaceStr::ReplaceStr(std::string before, std::string after) :  _before(before), _after(after)
{
}

ReplaceStr::ReplaceStr()
{
}

ReplaceStr::~ReplaceStr()
{
}

void ReplaceStr::replace(std::ifstream& r_file, std::ofstream& w_file)
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
