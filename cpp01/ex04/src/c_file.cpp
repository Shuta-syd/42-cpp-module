/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_file.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:30:04 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 12:18:01 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <c_file.hpp>

file::file()
{
}

file::~file()
{
}

std::fstream *get_file_stream(void){return _file};

bool	file::r_open(std::string filename)
{
	_file.open(argv[1], std::ios::out);
	if (!_file)
	{
		std::cerr << "[Error]:Could not open the file " << std::endl;
		return false;
	}
	else if (!_file.is_open())
	{
		std::cout << "[Error]:the file didn't exist" << std::endl;
		return false;
	}
	else if (_file.eof())
	{
		std::cout << "[Error]:empty string in the file " << std::endl;
		return false;
	}
	return true;
}

bool file::w_open(std::string filename)
{
	_file.open(argv[1], std::ios::in);
	if (!_file)
	{
		std::cerr << "[Error]:Could not open the file " << std::endl;
		return false;
	}
	else if (!_file.is_open())
	{
		std::cout << "[Error]:the file didn't exist" << std::endl;
		return false;
	}
	return true;
}

void close(void)
{
	_file.close;
}
