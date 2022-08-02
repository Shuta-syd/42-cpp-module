/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_file.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:30:13 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 12:20:09 by shogura          ###   ########.fr       */
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
	bool r_open(std::string);
	bool w_open(std::string);
	std::fstream *get_file_stream(void);
	void close(void);

private:
	std::fstream& _file;
};

#endif
