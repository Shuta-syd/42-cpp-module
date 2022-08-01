/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_file.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:30:13 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 10:52:34 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_FILE_HPP
#define C_FILE_HPP

#include <string>
#include <fstream>

class c_file
{
public:
	c_file();
	~c_file();
	open(std::string);

private:
	std::ofstream _file;
};

#endif
